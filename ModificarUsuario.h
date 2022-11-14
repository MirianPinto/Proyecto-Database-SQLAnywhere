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
	/// Resumen de ModificarUsuario
	/// </summary>
	public ref class ModificarUsuario : public System::Windows::Forms::Form
	{
	public:
		ModificarUsuario(void)
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::DomainUpDown^ Opcion;
	private: System::Windows::Forms::DomainUpDown^ Privilegios;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DomainUpDown^ Tipo;
	private: System::Windows::Forms::Label^ label4;
	public:
		Form^ Opciones;

		ModificarUsuario(Form^ opciones)
		{
			
			Opciones = opciones;

			
			InitializeComponent();

			ConnectionDB();
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->Opcion = (gcnew System::Windows::Forms::DomainUpDown());
			this->Privilegios = (gcnew System::Windows::Forms::DomainUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Tipo = (gcnew System::Windows::Forms::DomainUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(203, 296);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarUsuario::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(457, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(45, 41);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->Visible = false;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(43, 112);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(120, 22);
			this->domainUpDown1->TabIndex = 3;
			// 
			// Opcion
			// 
			this->Opcion->Items->Add(L"GRANT");
			this->Opcion->Items->Add(L"REVOKE");
			this->Opcion->Location = System::Drawing::Point(40, 200);
			this->Opcion->Name = L"Opcion";
			this->Opcion->Size = System::Drawing::Size(120, 22);
			this->Opcion->TabIndex = 4;
			// 
			// Privilegios
			// 
			this->Privilegios->Items->Add(L"ANY TABLE ");
			this->Privilegios->Items->Add(L"ANY VIEW");
			this->Privilegios->Items->Add(L"ANY SEQUENCE");
			this->Privilegios->Items->Add(L"ANY PROCEDURE");
			this->Privilegios->Items->Add(L"ANY OBJECT");
			this->Privilegios->Items->Add(L"ANY FUNCTION");
			this->Privilegios->Items->Add(L"ANY INDEX");
			this->Privilegios->Items->Add(L"ANY USER");
			this->Privilegios->Items->Add(L"ANY TRIGGER");
			this->Privilegios->Location = System::Drawing::Point(350, 200);
			this->Privilegios->Name = L"Privilegios";
			this->Privilegios->Size = System::Drawing::Size(120, 22);
			this->Privilegios->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Usuario a Editar:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Opcion:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(350, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Privilegio:";
			// 
			// Tipo
			// 
			this->Tipo->Items->Add(L"CREATE");
			this->Tipo->Items->Add(L"DROP");
			this->Tipo->Items->Add(L"ALTER");
			this->Tipo->Location = System::Drawing::Point(203, 200);
			this->Tipo->Name = L"Tipo";
			this->Tipo->Size = System::Drawing::Size(120, 22);
			this->Tipo->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(203, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Tipo";
			// 
			// ModificarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 400);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Tipo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Privilegios);
			this->Controls->Add(this->Opcion);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ModificarUsuario";
			this->Text = L"ModificarUsuario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void ConnectionDB()
		{
			String^ connString = "Dsn=TBD1;uid=Admin-Mirian;pwd=georgina";
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "Select user_name From sys.SYSUSER Where password is not null";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						domainUpDown1->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void ConnectionDB2(String^ privi)
		{
			String^ connString = "Dsn=TBD1;uid=Admin-Mirian;pwd=georgina";
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = privi;
				cmd->ExecuteNonQuery();






				//MessageBox::Show("Usuario autorizado!", "Usuario autorizado!", MessageBoxButtons::OK, MessageBoxIcon::Error);


				CON->Close();
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
	
	
		String^ codigo = "";

		if (Opcion->Text->CompareTo("GRANT") == 0) 
		{
			codigo = "GRANT " + Tipo->Text +" " + Privilegios->Text + " TO " + domainUpDown1->Text + ";";
		}
		else 
		{
			codigo = "REVOKE " + Tipo->Text + " " + Privilegios->Text + " FROM " + domainUpDown1->Text + ";";
		}


		ConnectionDB2(codigo);



	
	
	}
};
}
