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
	/// Resumen de CrearIndices
	/// </summary>
	public ref class CrearIndices : public System::Windows::Forms::Form
	{
	public:
		CrearIndices(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		Form^ Opciones;
		String^ user;
		String^ pas;

		String^ CodigoCreate = "";

		String^ acces;
	public:
		CrearIndices(Form^ opciones, String^ users, String^ pass)
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
		~CrearIndices()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ NI;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DomainUpDown^ Tablas;









	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DomainUpDown^ Columnas;





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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NI = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Tablas = (gcnew System::Windows::Forms::DomainUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Columnas = (gcnew System::Windows::Forms::DomainUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearIndices::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(253, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Crear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CrearIndices::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
			// 
			// NI
			// 
			this->NI->Location = System::Drawing::Point(83, 239);
			this->NI->Name = L"NI";
			this->NI->Size = System::Drawing::Size(100, 22);
			this->NI->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(250, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Tabla";
			// 
			// Tablas
			// 
			this->Tablas->Location = System::Drawing::Point(240, 239);
			this->Tablas->Name = L"Tablas";
			this->Tablas->Size = System::Drawing::Size(120, 22);
			this->Tablas->TabIndex = 6;
			this->Tablas->SelectedItemChanged += gcnew System::EventHandler(this, &CrearIndices::Tablas_SelectedItemChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(431, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Columna";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(504, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(123, 66);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->Visible = false;
			// 
			// Columnas
			// 
			this->Columnas->Location = System::Drawing::Point(413, 239);
			this->Columnas->Name = L"Columnas";
			this->Columnas->Size = System::Drawing::Size(120, 22);
			this->Columnas->TabIndex = 15;
			// 
			// CrearIndices
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(627, 440);
			this->Controls->Add(this->Columnas);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Tablas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NI);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"CrearIndices";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearIndices";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




		void Tablas2()
		{
			dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "Select T.Table_Name From(SysObject as O join SysTab as T on O.Object_ID = T.Object_ID join SysColumn as C on C.Table_ID = T.Table_ID) " +
					"join SysUser as U Where  U.User_Name = 'Admin-Mirian' Group by T.Table_Name";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						Tablas->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				CON->Close();
				dataGridView1->Visible = false;
				//dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void Tablas3()
		{
			dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "Select  T.Table_Name, Column_Name From(SysObject as O join SysTab as T on O.Object_ID = T.Object_ID join SysColumn as C on C.Table_ID = T.Table_ID)" 
					+"join SysUser as U Where  U.User_Name = 'Admin-Mirian' and T.Table_Name = '" + Tablas->Text + "';";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;

				Columnas->Text = "";
				Columnas->Items->Clear();

				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						Columnas->Items->Add(row->Cells[1]->Value->ToString());
					}
				}


				CON->Close();
				dataGridView1->Visible = false;
				//dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}



		void ConnectionDB()
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = CodigoCreate;
				cmd->ExecuteNonQuery();

				//DataTable^ dt = gcnew DataTable();
				//OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				//dp->Fill(dt);
				//dataGridView1->DataSource = dt;
				CON->Close();



				MessageBox::Show("Funcion Creada!", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		CodigoCreate = "CREATE UNIQUE INDEX " + NI->Text + " ON " + Tablas->Text + "("+ Columnas->Text + ")";

		ConnectionDB();

		NI->Text = "";
		

	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Visible = false;
	Opciones->Show();


}
private: System::Void Tablas_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

	Tablas->Text;
	Columnas->ResetBindings();

	Tablas3();


}
};
}
