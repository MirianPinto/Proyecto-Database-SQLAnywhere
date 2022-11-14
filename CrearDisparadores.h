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
	/// Resumen de CrearDisparadores
	/// </summary>
	public ref class CrearDisparadores : public System::Windows::Forms::Form
	{
	public:
		CrearDisparadores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		String^ codigoCreate="";
		Form^ Opciones;
		String^ user;
		String^ pas;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::TextBox^ NT;
	private: System::Windows::Forms::Label^ NTabla;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DomainUpDown^ Accion;

	private: System::Windows::Forms::DomainUpDown^ Tablas;
	private: System::Windows::Forms::DomainUpDown^ Event;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DomainUpDown^ Nivel;
	private: System::Windows::Forms::TextBox^ SQL;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ Crear;
		   String^ acces;
	public:
		CrearDisparadores(Form^ opciones, String^ users, String^ pass)
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
		~CrearDisparadores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Regresar;
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
			this->Regresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NT = (gcnew System::Windows::Forms::TextBox());
			this->NTabla = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Accion = (gcnew System::Windows::Forms::DomainUpDown());
			this->Tablas = (gcnew System::Windows::Forms::DomainUpDown());
			this->Event = (gcnew System::Windows::Forms::DomainUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Nivel = (gcnew System::Windows::Forms::DomainUpDown());
			this->SQL = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Crear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(12, 12);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(100, 38);
			this->Regresar->TabIndex = 0;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &CrearDisparadores::Regresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// NT
			// 
			this->NT->Location = System::Drawing::Point(29, 105);
			this->NT->Name = L"NT";
			this->NT->Size = System::Drawing::Size(100, 22);
			this->NT->TabIndex = 2;
			// 
			// NTabla
			// 
			this->NTabla->AutoSize = true;
			this->NTabla->Location = System::Drawing::Point(443, 72);
			this->NTabla->Name = L"NTabla";
			this->NTabla->Size = System::Drawing::Size(125, 16);
			this->NTabla->TabIndex = 4;
			this->NTabla->Text = L"Nombre de la tabla:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Accion";
			this->label2->Click += gcnew System::EventHandler(this, &CrearDisparadores::label2_Click);
			// 
			// Accion
			// 
			this->Accion->Items->Add(L"Antes ");
			this->Accion->Items->Add(L"Despues");
			this->Accion->Items->Add(L"En lugar");
			this->Accion->Location = System::Drawing::Point(115, 184);
			this->Accion->Name = L"Accion";
			this->Accion->Size = System::Drawing::Size(120, 22);
			this->Accion->TabIndex = 6;
			// 
			// Tablas
			// 
			this->Tablas->Location = System::Drawing::Point(446, 106);
			this->Tablas->Name = L"Tablas";
			this->Tablas->Size = System::Drawing::Size(120, 22);
			this->Tablas->TabIndex = 7;
			// 
			// Event
			// 
			this->Event->Items->Add(L"Insertar");
			this->Event->Items->Add(L"Modificar");
			this->Event->Items->Add(L"Eliminar");
			this->Event->Location = System::Drawing::Point(342, 184);
			this->Event->Name = L"Event";
			this->Event->Size = System::Drawing::Size(120, 22);
			this->Event->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(348, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Evento";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(278, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"de";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(235, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Nivel";
			// 
			// Nivel
			// 
			this->Nivel->Items->Add(L"Nivel de Fila");
			this->Nivel->Items->Add(L"Nivel de instruccion");
			this->Nivel->Location = System::Drawing::Point(238, 106);
			this->Nivel->Name = L"Nivel";
			this->Nivel->Size = System::Drawing::Size(120, 22);
			this->Nivel->TabIndex = 12;
			// 
			// SQL
			// 
			this->SQL->Location = System::Drawing::Point(124, 249);
			this->SQL->Multiline = true;
			this->SQL->Name = L"SQL";
			this->SQL->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->SQL->Size = System::Drawing::Size(347, 204);
			this->SQL->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(260, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Instruccion";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(548, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(64, 50);
			this->dataGridView1->TabIndex = 15;
			this->dataGridView1->Visible = false;
			// 
			// Crear
			// 
			this->Crear->Location = System::Drawing::Point(251, 468);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(95, 32);
			this->Crear->TabIndex = 16;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &CrearDisparadores::Crear_Click);
			// 
			// CrearDisparadores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 512);
			this->Controls->Add(this->Crear);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->SQL);
			this->Controls->Add(this->Nivel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Event);
			this->Controls->Add(this->Tablas);
			this->Controls->Add(this->Accion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NTabla);
			this->Controls->Add(this->NT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Regresar);
			this->Name = L"CrearDisparadores";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearDisparadores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void Tablas1()
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
				dataGridView1->Visible = true;
				dataGridView1->DataSource = "";

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

				cmd->CommandText = codigoCreate;
				cmd->ExecuteNonQuery();

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);*/
				//dataGridView1->DataSource = dt;
				CON->Close();



				MessageBox::Show("Disparador creado!", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


	private: System::Void Regresar_Click(System::Object^ sender, System::EventArgs^ e) {


		this->Visible = false;
		Opciones->Show();



	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Crear_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ nivel = "";
	if (Nivel->Text->CompareTo("Nivel de Fila") ==0)
	{
		nivel = "FOR EACH ROW ";
	}
	else 
	{
		nivel = "FOR EACH STATEMENT ";
	}

	String^ acion = "";
	if (Accion->Text->CompareTo("Despues") ==0)
	{
		acion = "AFTER ";
	}
	else if(Accion->Text->CompareTo("Antes") ==0)
	{
		acion = "BEFORE ";
	}
	else 
	{
		acion = "INSTEAD ";
	}

	String^ even = "";
	if (Event->Text->CompareTo("Insertar") ==0)
	{
		even = "INSERT ";
	}
	else if (Event->Text->CompareTo("Eliminar")==0)
	{
		even = "DELETE ";
	}
	else
	{
		even = "UPDATE ";
	}


	codigoCreate = "CREATE TRIGGER " + NT->Text + " " + acion + " " + even
		+ "order 1 on \"Admin-Mirian\".\"" + Tablas->Text + "\" " + nivel + " BEGIN " + SQL->Text+ " END";

	ConnectionDB();

	codigoCreate = "";
	SQL->Text = "";
	NT->Text = "";
}
};
}
