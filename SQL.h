#pragma once

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	using namespace System::Data::Odbc;
	using namespace Proyecto_TDatabase;


	/// <summary>
	/// Resumen de SQL
	/// </summary>
	public ref class SQL : public System::Windows::Forms::Form
	{
	public:
		SQL(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}


		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ button2;
	public:

		Form^ Opciones;

		SQL(Form^ opciones, String^ users, String^ pass)
		{
			user = users;
			pas = pass;
			Opciones = opciones;

			if (users->CompareTo("Admin-Mirian") == 0 && pass->CompareTo("georgina") == 0)
			{
				acces = "";
			}
			else
			{
				acces = "\"Admin-Mirian\".";
			}
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SQL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Sentencia;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sentencia = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SQL::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(312, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Escriba la sentencia:";
			// 
			// Sentencia
			// 
			this->Sentencia->Location = System::Drawing::Point(213, 81);
			this->Sentencia->Multiline = true;
			this->Sentencia->Name = L"Sentencia";
			this->Sentencia->Size = System::Drawing::Size(328, 175);
			this->Sentencia->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(110, 309);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(552, 267);
			this->dataGridView1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(344, 276);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Resultado:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(471, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 25);
			this->button2->TabIndex = 5;
			this->button2->Text = L"►";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SQL::button2_Click);
			// 
			// SQL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 603);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Sentencia);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"SQL";
			this->Text = L"SQL";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void ConnectionDB()
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = Sentencia->Text;
				cmd->ExecuteNonQuery();

				if(Sentencia->Text->Contains("CREATE"))
				{

				}
				else
				{
					DataTable^ dt = gcnew DataTable();
					OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
					dp->Fill(dt);
					dataGridView1->DataSource = dt;
				}
				
				CON->Close();

				//CON->Close();
				MessageBox::Show("Consulta hecha", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	ConnectionDB();


}
};
}
