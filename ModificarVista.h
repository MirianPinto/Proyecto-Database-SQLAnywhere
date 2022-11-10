#pragma once

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Resumen de ModificarVista
	/// </summary>
	public ref class ModificarVista : public System::Windows::Forms::Form
	{
	public:
		ModificarVista(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DomainUpDown^ vistas;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nueva;
	private: System::Windows::Forms::TextBox^ Anterior;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:

		Form^ Opciones;

		ModificarVista(Form^ opciones, String^ users, String^ pass)
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
			Vistas1();

		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarVista()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->vistas = (gcnew System::Windows::Forms::DomainUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nueva = (gcnew System::Windows::Forms::TextBox());
			this->Anterior = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarVista::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(186, 331);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarVista::button2_Click);
			// 
			// vistas
			// 
			this->vistas->Location = System::Drawing::Point(186, 122);
			this->vistas->Name = L"vistas";
			this->vistas->Size = System::Drawing::Size(120, 22);
			this->vistas->TabIndex = 2;
			this->vistas->SelectedItemChanged += gcnew System::EventHandler(this, &ModificarVista::vistas_SelectedItemChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(170, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Vista a alterar:";
			// 
			// nueva
			// 
			this->nueva->Location = System::Drawing::Point(248, 190);
			this->nueva->Multiline = true;
			this->nueva->Name = L"nueva";
			this->nueva->Size = System::Drawing::Size(224, 135);
			this->nueva->TabIndex = 4;
			// 
			// Anterior
			// 
			this->Anterior->Enabled = false;
			this->Anterior->Location = System::Drawing::Point(24, 190);
			this->Anterior->Multiline = true;
			this->Anterior->Name = L"Anterior";
			this->Anterior->Size = System::Drawing::Size(202, 135);
			this->Anterior->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Sentencia vieja";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(248, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Sentencia nueva";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(366, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(78, 37);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ModificarVista::dataGridView1_CellContentClick);
			// 
			// ModificarVista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 386);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Anterior);
			this->Controls->Add(this->nueva);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->vistas);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ModificarVista";
			this->Text = L"ModificarVista";
			this->Load += gcnew System::EventHandler(this, &ModificarVista::ModificarVista_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//SELECT viewtext, viewname FROM sys.SYSVIEWs where vcreator = 'Admin-Mirian' and viewname = ;
		void Vistas2()
		{
			//dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "SELECT viewtext, viewname FROM sys.SYSVIEWs where vcreator = 'Admin-Mirian' and viewname = " + vistas->Text;
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						Anterior->Text = row->Cells[0]->Value->ToString();
					}
				}


				CON->Close();
				//dataGridView1->Visible = true;
				//dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void Vistas1()
		{
			//dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "SELECT viewname FROM sys.SYSVIEWs where vcreator = 'Admin-Mirian'";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						vistas->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				CON->Close();
				//dataGridView1->Visible = true;
				//dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void ModificarVistaa(String^ codigoELiminar)
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = codigoELiminar;
				cmd->ExecuteNonQuery();

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;*/
				CON->Close();




				MessageBox::Show("Se modifico correctamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

	private: System::Void ModificarVista_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();

	}
	private: System::Void vistas_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

		Vistas2();


	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ codigo = "ALTER VIEW \"Admin - Mirian\".\"" + vistas->Text + "\" (  ) AS " + nueva->Text + ";";


	ModificarVistaa(codigo);

}
};
}
