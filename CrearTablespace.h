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
	/// Resumen de CrearTablespace
	/// </summary>
	public ref class CrearTablespace : public System::Windows::Forms::Form
	{
	public:
		CrearTablespace(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Form^ Opciones;
		String^ user;
		String^ pas;
		String^ Createcodigo = "";
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Name;
	public:

	private: System::Windows::Forms::Button^ button1;
		   String^ acces;

	public:
		CrearTablespace(Form^ opciones, String^ users, String^ pass)
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
		~CrearTablespace()
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
			this->Name = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(13, 13);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(106, 33);
			this->Regresar->TabIndex = 0;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &CrearTablespace::Regresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(237, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// Name
			// 
			this->Name->Location = System::Drawing::Point(198, 199);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(145, 22);
			this->Name->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(223, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearTablespace::button1_Click);
			// 
			// CrearTablespace
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 435);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Regresar);
//			this->Name = L"CrearTablespace";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearTablespace";
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

				cmd->CommandText = Createcodigo;
				cmd->ExecuteNonQuery();

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);*/
				//dataGridView1->DataSource = dt;
				CON->Close();



				MessageBox::Show("dbspace creada correctamente", "Creacion de dbspace", MessageBoxButtons::OK, MessageBoxIcon::Error);



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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Createcodigo = "CREATE DBSPACE " + Name->Text + " AS \'" + Name->Text + ".db\';";

		ConnectionDB();


		Name->Text = "";


	}
};
}
