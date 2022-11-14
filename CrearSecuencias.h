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
	/// Resumen de CrearSecuencias
	/// </summary>
	public ref class CrearSecuencias : public System::Windows::Forms::Form
	{
	public:
		CrearSecuencias(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Form^ Opciones;

		String^ CodigoCreate="";
		String^ user;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ MAXV;

	private: System::Windows::Forms::NumericUpDown^ mV;

	private: System::Windows::Forms::NumericUpDown^ INICO;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Crear;
		   String^ pas;
	public:
		CrearSecuencias(Form^ opciones, String^ users, String^ pass)
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


	private: System::Windows::Forms::Label^ NS;
	private: System::Windows::Forms::TextBox^ TEXTNS;
	public:

	private: System::Windows::Forms::Label^ Inc;
	private: System::Windows::Forms::NumericUpDown^ INCRE;

		   String^ acces;
		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CrearSecuencias()
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
			this->NS = (gcnew System::Windows::Forms::Label());
			this->TEXTNS = (gcnew System::Windows::Forms::TextBox());
			this->Inc = (gcnew System::Windows::Forms::Label());
			this->INCRE = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MAXV = (gcnew System::Windows::Forms::NumericUpDown());
			this->mV = (gcnew System::Windows::Forms::NumericUpDown());
			this->INICO = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Crear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->INCRE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MAXV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->INICO))->BeginInit();
			this->SuspendLayout();
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(13, 13);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(102, 41);
			this->Regresar->TabIndex = 0;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &CrearSecuencias::Regresar_Click);
			// 
			// NS
			// 
			this->NS->AutoSize = true;
			this->NS->Location = System::Drawing::Point(135, 116);
			this->NS->Name = L"NS";
			this->NS->Size = System::Drawing::Size(56, 16);
			this->NS->TabIndex = 1;
			this->NS->Text = L"Nombre";
			// 
			// TEXTNS
			// 
			this->TEXTNS->Location = System::Drawing::Point(135, 151);
			this->TEXTNS->Name = L"TEXTNS";
			this->TEXTNS->Size = System::Drawing::Size(100, 22);
			this->TEXTNS->TabIndex = 2;
			// 
			// Inc
			// 
			this->Inc->AutoSize = true;
			this->Inc->Location = System::Drawing::Point(489, 116);
			this->Inc->Name = L"Inc";
			this->Inc->Size = System::Drawing::Size(94, 16);
			this->Inc->TabIndex = 3;
			this->Inc->Text = L"Incremento en:";
			// 
			// INCRE
			// 
			this->INCRE->Location = System::Drawing::Point(492, 151);
			this->INCRE->Name = L"INCRE";
			this->INCRE->Size = System::Drawing::Size(120, 22);
			this->INCRE->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(202, 234);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Minimo valor:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(368, 234);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Maximo valor:";
			// 
			// MAXV
			// 
			this->MAXV->Location = System::Drawing::Point(371, 263);
			this->MAXV->Name = L"MAXV";
			this->MAXV->Size = System::Drawing::Size(120, 22);
			this->MAXV->TabIndex = 7;
			// 
			// mV
			// 
			this->mV->Location = System::Drawing::Point(205, 263);
			this->mV->Name = L"mV";
			this->mV->Size = System::Drawing::Size(120, 22);
			this->mV->TabIndex = 8;
			// 
			// INICO
			// 
			this->INICO->Location = System::Drawing::Point(301, 152);
			this->INICO->Name = L"INICO";
			this->INICO->Size = System::Drawing::Size(120, 22);
			this->INICO->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(311, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Valor de inicio";
			// 
			// Crear
			// 
			this->Crear->Location = System::Drawing::Point(266, 379);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(137, 52);
			this->Crear->TabIndex = 11;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &CrearSecuencias::Crear_Click);
			// 
			// CrearSecuencias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 506);
			this->Controls->Add(this->Crear);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->INICO);
			this->Controls->Add(this->mV);
			this->Controls->Add(this->MAXV);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->INCRE);
			this->Controls->Add(this->Inc);
			this->Controls->Add(this->TEXTNS);
			this->Controls->Add(this->NS);
			this->Controls->Add(this->Regresar);
			this->Name = L"CrearSecuencias";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearSecuencias";
			this->Load += gcnew System::EventHandler(this, &CrearSecuencias::CrearSecuencias_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->INCRE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MAXV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->INICO))->EndInit();
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



				MessageBox::Show("La secuencia ha sido creada correctamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



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
	private: System::Void CrearSecuencias_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Crear_Click(System::Object^ sender, System::EventArgs^ e) {


	CodigoCreate = "CREATE SEQUENCE " + TEXTNS->Text + " START WITH " + INICO->Text + " INCREMENT BY " + INCRE->Text + " MINVALUE " + mV->Text + " MAXVALUE " + MAXV->Text + " CYCLE;";


	ConnectionDB();

	TEXTNS->Text = "";
	

}
};
}
