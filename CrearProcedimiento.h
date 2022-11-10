#pragma once
#include <iostream>

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	using namespace System::Data::Odbc;
	using namespace Proyecto_TDatabase;

	/// <summary>
	/// Resumen de CrearProcedimiento
	/// </summary>
	public ref class CrearProcedimiento : public System::Windows::Forms::Form
	{
	public:
		CrearProcedimiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Form^ Opciones;
		String^ user;
		String^ CodigoCreate ="";
		String^ pas;

		String^ NombreProce = "";
		String^ NombreParaAnte = "";

		String^ Parametros = "";

	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DomainUpDown^ Data;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Npara;

	private: System::Windows::Forms::TextBox^ NP;
	private: System::Windows::Forms::TextBox^ Procedimeinto;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ Escala;
	private: System::Windows::Forms::NumericUpDown^ size;
	private: System::Windows::Forms::NumericUpDown^ scala;
	private: System::Windows::Forms::Button^ Crear;
	private: System::Windows::Forms::TextBox^ parametros;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DomainUpDown^ TP;

		   String^ acces;
	public:
		CrearProcedimiento(Form^ opciones, String^ users, String^ pass)
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
		~CrearProcedimiento()
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Data = (gcnew System::Windows::Forms::DomainUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Npara = (gcnew System::Windows::Forms::TextBox());
			this->NP = (gcnew System::Windows::Forms::TextBox());
			this->Procedimeinto = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Escala = (gcnew System::Windows::Forms::Label());
			this->size = (gcnew System::Windows::Forms::NumericUpDown());
			this->scala = (gcnew System::Windows::Forms::NumericUpDown());
			this->Crear = (gcnew System::Windows::Forms::Button());
			this->parametros = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TP = (gcnew System::Windows::Forms::DomainUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->size))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scala))->BeginInit();
			this->SuspendLayout();
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(13, 13);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(113, 33);
			this->Regresar->TabIndex = 0;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &CrearProcedimiento::Regresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre de procedimiento";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Parametros";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(460, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Tipo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 32);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Agregar parametro";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearProcedimiento::button1_Click);
			// 
			// Data
			// 
			this->Data->Items->Add(L"varchar");
			this->Data->Items->Add(L"integer");
			this->Data->Items->Add(L"date");
			this->Data->Items->Add(L"numeric");
			this->Data->Items->Add(L"char");
			this->Data->Location = System::Drawing::Point(203, 194);
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(85, 22);
			this->Data->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(219, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Data";
			this->label6->Click += gcnew System::EventHandler(this, &CrearProcedimiento::label6_Click);
			// 
			// Npara
			// 
			this->Npara->Location = System::Drawing::Point(73, 194);
			this->Npara->Name = L"Npara";
			this->Npara->Size = System::Drawing::Size(100, 22);
			this->Npara->TabIndex = 13;
			// 
			// NP
			// 
			this->NP->Location = System::Drawing::Point(73, 117);
			this->NP->Name = L"NP";
			this->NP->Size = System::Drawing::Size(100, 22);
			this->NP->TabIndex = 14;
			// 
			// Procedimeinto
			// 
			this->Procedimeinto->Location = System::Drawing::Point(381, 299);
			this->Procedimeinto->Multiline = true;
			this->Procedimeinto->Name = L"Procedimeinto";
			this->Procedimeinto->Size = System::Drawing::Size(247, 229);
			this->Procedimeinto->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(378, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Procedimiento";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(302, 163);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Tamaño";
			// 
			// Escala
			// 
			this->Escala->AutoSize = true;
			this->Escala->Location = System::Drawing::Point(378, 163);
			this->Escala->Name = L"Escala";
			this->Escala->Size = System::Drawing::Size(49, 16);
			this->Escala->TabIndex = 18;
			this->Escala->Text = L"Escala";
			// 
			// size
			// 
			this->size->Location = System::Drawing::Point(294, 194);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(57, 22);
			this->size->TabIndex = 19;
			// 
			// scala
			// 
			this->scala->Location = System::Drawing::Point(371, 194);
			this->scala->Name = L"scala";
			this->scala->Size = System::Drawing::Size(61, 22);
			this->scala->TabIndex = 20;
			// 
			// Crear
			// 
			this->Crear->Location = System::Drawing::Point(294, 554);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(92, 30);
			this->Crear->TabIndex = 21;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &CrearProcedimiento::Crear_Click);
			// 
			// parametros
			// 
			this->parametros->Enabled = false;
			this->parametros->Location = System::Drawing::Point(84, 299);
			this->parametros->Multiline = true;
			this->parametros->Name = L"parametros";
			this->parametros->Size = System::Drawing::Size(204, 229);
			this->parametros->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(84, 275);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Parametros agregados";
			// 
			// TP
			// 
			this->TP->Items->Add(L"IN");
			this->TP->Items->Add(L"OUT");
			this->TP->Items->Add(L"INOUT");
			this->TP->Location = System::Drawing::Point(449, 193);
			this->TP->Name = L"TP";
			this->TP->Size = System::Drawing::Size(120, 22);
			this->TP->TabIndex = 24;
			// 
			// CrearProcedimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 589);
			this->Controls->Add(this->TP);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->parametros);
			this->Controls->Add(this->Crear);
			this->Controls->Add(this->scala);
			this->Controls->Add(this->size);
			this->Controls->Add(this->Escala);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Procedimeinto);
			this->Controls->Add(this->NP);
			this->Controls->Add(this->Npara);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Data);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Regresar);
			this->Name = L"CrearProcedimiento";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearProcedimiento";
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

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);*/
				//dataGridView1->DataSource = dt;
				CON->Close();



				MessageBox::Show("Procedimiento creado correctamente!", "Creacion de Procedimiento", MessageBoxButtons::OK, MessageBoxIcon::Error);



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
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	NP->Enabled = false;

	if (NombreProce->CompareTo("") == 0) {

		NombreProce = NP->Text;
		CodigoCreate = "CREATE PROCEDURE " + NP->Text + " ( ";

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
	
	if(Data->Text->CompareTo("varchar") == 0 || Data->Text->CompareTo("char") == 0 )
	{
		Parametros = Parametros + TP->Text + " " + Npara->Text + " " + Data->Text + "("+size->Text+")";
		

	}
	else if (Data->Text->CompareTo("numeric") == 0) 
	{
		Parametros = Parametros + TP->Text + " " + Npara->Text + " " + Data->Text + "(" + size->Text + ", " + scala->Text + ")";
	}
	else if (Data->Text->CompareTo("integer") == 0 || Data->Text->CompareTo("date") == 0) 
	{
		Parametros = Parametros + TP->Text + " " + Npara->Text + " " + Data->Text ;
	}


	parametros->Text += Npara->Text+ "\r\n";
	Npara->Text = "";
	//scala->Enabled = true;

	String^ a;

}
private: System::Void Crear_Click(System::Object^ sender, System::EventArgs^ e) {


	CodigoCreate = CodigoCreate + Parametros + ") AS " + Procedimeinto->Text;

	ConnectionDB();

	NP->Text = "";
	NP->Enabled = true;
}
};
}
