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
	/// Resumen de CrearVista
	/// </summary>
	public ref class CrearVista : public System::Windows::Forms::Form
	{
	public:
		CrearVista(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		Form^ Opciones;
		String^ user;
	private: System::Windows::Forms::Button^ Crear;
	public:
		String^ pas;
		String^ codigoCreate ="";
		CrearVista(Form^ opciones, String^ users, String^ pass)
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



	private: System::Windows::Forms::TextBox^ textNV;
	public:
	private: System::Windows::Forms::Label^ NV;
	private: System::Windows::Forms::TextBox^ Sentencia;

	private: System::Windows::Forms::Label^ label1;
		   String^ acces;

		


	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~CrearVista()
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
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Regresar = (gcnew System::Windows::Forms::Button());
			this->textNV = (gcnew System::Windows::Forms::TextBox());
			this->NV = (gcnew System::Windows::Forms::Label());
			this->Sentencia = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Crear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(13, 13);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(91, 40);
			this->Regresar->TabIndex = 0;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &CrearVista::Regresar_Click);
			// 
			// textNV
			// 
			this->textNV->Location = System::Drawing::Point(101, 268);
			this->textNV->Name = L"textNV";
			this->textNV->Size = System::Drawing::Size(100, 22);
			this->textNV->TabIndex = 1;
			// 
			// NV
			// 
			this->NV->AutoSize = true;
			this->NV->Location = System::Drawing::Point(120, 249);
			this->NV->Name = L"NV";
			this->NV->Size = System::Drawing::Size(56, 16);
			this->NV->TabIndex = 2;
			this->NV->Text = L"Nombre";
			// 
			// Sentencia
			// 
			this->Sentencia->Location = System::Drawing::Point(352, 173);
			this->Sentencia->Multiline = true;
			this->Sentencia->Name = L"Sentencia";
			this->Sentencia->Size = System::Drawing::Size(289, 248);
			this->Sentencia->TabIndex = 3;
			this->Sentencia->TextChanged += gcnew System::EventHandler(this, &CrearVista::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(349, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Sentencia de vista";
			// 
			// Crear
			// 
			this->Crear->Location = System::Drawing::Point(289, 457);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(120, 40);
			this->Crear->TabIndex = 5;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &CrearVista::Crear_Click);
			// 
			// CrearVista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 537);
			this->Controls->Add(this->Crear);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Sentencia);
			this->Controls->Add(this->NV);
			this->Controls->Add(this->textNV);
			this->Controls->Add(this->Regresar);
			this->Name = L"CrearVista";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearVista";
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

				cmd->CommandText = codigoCreate;
					cmd->ExecuteNonQuery();

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);*/
				//dataGridView1->DataSource = dt;
				CON->Close();



				MessageBox::Show("La vista " + textNV->Text + " ha sido creada! ", "La vista " + textNV->Text + " ha sido creada! ", MessageBoxButtons::OK, MessageBoxIcon::Error);



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
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Crear_Click(System::Object^ sender, System::EventArgs^ e) {

	codigoCreate = "CREATE VIEW "+ textNV->Text+" AS " + Sentencia->Text;

	ConnectionDB();

	textNV->Text = "";
	Sentencia->Text = "";
}
};
}
