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
	/// Resumen de CrearFunciones
	/// </summary>
	public ref class CrearFunciones : public System::Windows::Forms::Form
	{
	public:
		CrearFunciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Form^ Opciones;
		String^ user;
		String^ pas;
	private: System::Windows::Forms::Button^ Crear;
	public:

	public:
	private: System::Windows::Forms::TextBox^ NF;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ VR;
	private: System::Windows::Forms::DomainUpDown^ VRE;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labela;
	private: System::Windows::Forms::NumericUpDown^ size1;
	private: System::Windows::Forms::NumericUpDown^ Scala1;


	private: System::Windows::Forms::TextBox^ Funcion;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ NVAR;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Npara;

	private: System::Windows::Forms::NumericUpDown^ size;
	private: System::Windows::Forms::NumericUpDown^ scala;


	private: System::Windows::Forms::DomainUpDown^ Data;
	private: System::Windows::Forms::Button^ AP;
	private: System::Windows::Forms::TextBox^ parametro;

		   String^ acces;
	public:
		CrearFunciones(Form^ opciones, String^ users, String^ pass)
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

		String^ NombreProce = "";
		String^ NombreParaAnte = "";
		String^ CodigoCreate = "";
		String^ Parametros = "";

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CrearFunciones()
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
			this->Crear = (gcnew System::Windows::Forms::Button());
			this->NF = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->VR = (gcnew System::Windows::Forms::Label());
			this->VRE = (gcnew System::Windows::Forms::DomainUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labela = (gcnew System::Windows::Forms::Label());
			this->size1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Scala1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Funcion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NVAR = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Npara = (gcnew System::Windows::Forms::TextBox());
			this->size = (gcnew System::Windows::Forms::NumericUpDown());
			this->scala = (gcnew System::Windows::Forms::NumericUpDown());
			this->Data = (gcnew System::Windows::Forms::DomainUpDown());
			this->AP = (gcnew System::Windows::Forms::Button());
			this->parametro = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->size1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scala1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->size))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scala))->BeginInit();
			this->SuspendLayout();
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(13, 13);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(92, 33);
			this->Regresar->TabIndex = 0;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &CrearFunciones::Regresar_Click);
			// 
			// Crear
			// 
			this->Crear->Location = System::Drawing::Point(513, 409);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(106, 43);
			this->Crear->TabIndex = 1;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &CrearFunciones::Crear_Click);
			// 
			// NF
			// 
			this->NF->Location = System::Drawing::Point(45, 109);
			this->NF->Name = L"NF";
			this->NF->Size = System::Drawing::Size(125, 22);
			this->NF->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre de Funcion";
			// 
			// VR
			// 
			this->VR->AutoSize = true;
			this->VR->Location = System::Drawing::Point(48, 151);
			this->VR->Name = L"VR";
			this->VR->Size = System::Drawing::Size(99, 16);
			this->VR->TabIndex = 4;
			this->VR->Text = L"Valor a retornar";
			// 
			// VRE
			// 
			this->VRE->Items->Add(L"integer");
			this->VRE->Items->Add(L"numeric");
			this->VRE->Items->Add(L"char");
			this->VRE->Items->Add(L"varchar");
			this->VRE->Location = System::Drawing::Point(45, 180);
			this->VRE->Name = L"VRE";
			this->VRE->Size = System::Drawing::Size(136, 22);
			this->VRE->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(214, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Tamaño";
			// 
			// labela
			// 
			this->labela->AutoSize = true;
			this->labela->Location = System::Drawing::Point(366, 151);
			this->labela->Name = L"labela";
			this->labela->Size = System::Drawing::Size(49, 16);
			this->labela->TabIndex = 7;
			this->labela->Text = L"Escala";
			// 
			// size1
			// 
			this->size1->Location = System::Drawing::Point(220, 180);
			this->size1->Name = L"size1";
			this->size1->Size = System::Drawing::Size(129, 22);
			this->size1->TabIndex = 8;
			// 
			// Scala1
			// 
			this->Scala1->Location = System::Drawing::Point(369, 180);
			this->Scala1->Name = L"Scala1";
			this->Scala1->Size = System::Drawing::Size(133, 22);
			this->Scala1->TabIndex = 9;
			// 
			// Funcion
			// 
			this->Funcion->Location = System::Drawing::Point(45, 342);
			this->Funcion->Multiline = true;
			this->Funcion->Name = L"Funcion";
			this->Funcion->Size = System::Drawing::Size(196, 175);
			this->Funcion->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Funcion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(217, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Nombre de variable";
			this->label4->Click += gcnew System::EventHandler(this, &CrearFunciones::label4_Click);
			// 
			// NVAR
			// 
			this->NVAR->Location = System::Drawing::Point(220, 109);
			this->NVAR->Name = L"NVAR";
			this->NVAR->Size = System::Drawing::Size(100, 22);
			this->NVAR->TabIndex = 13;
			this->NVAR->TextChanged += gcnew System::EventHandler(this, &CrearFunciones::NVAR_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Parametros";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(187, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Data";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(357, 227);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Tamaño";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(510, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Escala";
			// 
			// Npara
			// 
			this->Npara->Location = System::Drawing::Point(45, 247);
			this->Npara->Name = L"Npara";
			this->Npara->Size = System::Drawing::Size(125, 22);
			this->Npara->TabIndex = 18;
			// 
			// size
			// 
			this->size->Location = System::Drawing::Point(359, 247);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(120, 22);
			this->size->TabIndex = 19;
			// 
			// scala
			// 
			this->scala->Location = System::Drawing::Point(513, 247);
			this->scala->Name = L"scala";
			this->scala->Size = System::Drawing::Size(120, 22);
			this->scala->TabIndex = 20;
			// 
			// Data
			// 
			this->Data->Items->Add(L"integer");
			this->Data->Items->Add(L"numeric");
			this->Data->Items->Add(L"char");
			this->Data->Items->Add(L"varchar");
			this->Data->Location = System::Drawing::Point(190, 246);
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(130, 22);
			this->Data->TabIndex = 21;
			// 
			// AP
			// 
			this->AP->Location = System::Drawing::Point(256, 290);
			this->AP->Name = L"AP";
			this->AP->Size = System::Drawing::Size(144, 35);
			this->AP->TabIndex = 22;
			this->AP->Text = L"Agregar Parametro";
			this->AP->UseVisualStyleBackColor = true;
			this->AP->Click += gcnew System::EventHandler(this, &CrearFunciones::AP_Click);
			// 
			// parametro
			// 
			this->parametro->Enabled = false;
			this->parametro->Location = System::Drawing::Point(268, 342);
			this->parametro->Multiline = true;
			this->parametro->Name = L"parametro";
			this->parametro->Size = System::Drawing::Size(211, 175);
			this->parametro->TabIndex = 23;
			// 
			// CrearFunciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 529);
			this->Controls->Add(this->parametro);
			this->Controls->Add(this->AP);
			this->Controls->Add(this->Data);
			this->Controls->Add(this->scala);
			this->Controls->Add(this->size);
			this->Controls->Add(this->Npara);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->NVAR);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Funcion);
			this->Controls->Add(this->Scala1);
			this->Controls->Add(this->size1);
			this->Controls->Add(this->labela);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->VRE);
			this->Controls->Add(this->VR);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NF);
			this->Controls->Add(this->Crear);
			this->Controls->Add(this->Regresar);
			this->Name = L"CrearFunciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearFunciones";
			this->Load += gcnew System::EventHandler(this, &CrearFunciones::CrearFunciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->size1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scala1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->size))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scala))->EndInit();
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

	private: System::Void Regresar_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();


	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void NVAR_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CrearFunciones_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Crear_Click(System::Object^ sender, System::EventArgs^ e) {


	CodigoCreate = CodigoCreate + Parametros + ") RETURNS " + VRE->Text + " DETERMINISTIC BEGIN DECLARE "+NVAR->Text + " " + VRE->Text+"; SET " + Funcion->Text  + " RETURN RESULTADO; END";

	ConnectionDB();
	CodigoCreate = "";
	NF->Text = "";
	//NP->Enabled = true;




}
private: System::Void AP_Click(System::Object^ sender, System::EventArgs^ e) {

	//NF->Enabled = false;

	if (NombreProce->CompareTo("") == 0) {

		NombreProce = NF->Text;
		CodigoCreate = "CREATE FUNCTION " + NF->Text + " ( ";

	}

	if (NombreParaAnte->CompareTo("") != 0)
	{
		NombreParaAnte = Npara->Text;
		Parametros = Parametros + ", ";

	}
	else
	{
		Parametros = Parametros + " ";
		NombreParaAnte = Npara->Text;
	}

	if (Data->Text->CompareTo("varchar") == 0 || Data->Text->CompareTo("char") == 0)
	{
		Parametros = Parametros + Npara->Text + " " + Data->Text + "(" + size->Text + ")";


	}
	else if (Data->Text->CompareTo("numeric") == 0)
	{
		Parametros = Parametros  + Npara->Text + " " + Data->Text + "(" + size->Text + ", " + scala->Text + ")";
	}
	else if (Data->Text->CompareTo("integer") == 0 || Data->Text->CompareTo("date") == 0)
	{
		Parametros = Parametros + Npara->Text + " " + Data->Text;
	}


	parametro->Text += Npara->Text + "\r\n";
	Npara->Text = "";
	//scala->Enabled = true;

	String^ a;


}
};
}
