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
	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::TextBox^ NF;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ VR;
	private: System::Windows::Forms::DomainUpDown^ VRE;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labela;
	private: System::Windows::Forms::NumericUpDown^ size;
	private: System::Windows::Forms::NumericUpDown^ Scala;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ NVAR;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->NF = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->VR = (gcnew System::Windows::Forms::Label());
			this->VRE = (gcnew System::Windows::Forms::DomainUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labela = (gcnew System::Windows::Forms::Label());
			this->size = (gcnew System::Windows::Forms::NumericUpDown());
			this->Scala = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NVAR = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->size))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scala))->BeginInit();
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(263, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// NF
			// 
			this->NF->Location = System::Drawing::Point(62, 165);
			this->NF->Name = L"NF";
			this->NF->Size = System::Drawing::Size(125, 22);
			this->NF->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre de Funcion";
			// 
			// VR
			// 
			this->VR->AutoSize = true;
			this->VR->Location = System::Drawing::Point(65, 207);
			this->VR->Name = L"VR";
			this->VR->Size = System::Drawing::Size(99, 16);
			this->VR->TabIndex = 4;
			this->VR->Text = L"Valor a retornar";
			// 
			// VRE
			// 
			this->VRE->Location = System::Drawing::Point(62, 236);
			this->VRE->Name = L"VRE";
			this->VRE->Size = System::Drawing::Size(120, 22);
			this->VRE->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(263, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Tamaño";
			// 
			// labela
			// 
			this->labela->AutoSize = true;
			this->labela->Location = System::Drawing::Point(266, 206);
			this->labela->Name = L"labela";
			this->labela->Size = System::Drawing::Size(49, 16);
			this->labela->TabIndex = 7;
			this->labela->Text = L"Escala";
			// 
			// size
			// 
			this->size->Location = System::Drawing::Point(269, 165);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(120, 22);
			this->size->TabIndex = 8;
			// 
			// Scala
			// 
			this->Scala->Location = System::Drawing::Point(266, 235);
			this->Scala->Name = L"Scala";
			this->Scala->Size = System::Drawing::Size(120, 22);
			this->Scala->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(401, 254);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 175);
			this->textBox1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(414, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Funcion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(427, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Nombre de variable";
			// 
			// NVAR
			// 
			this->NVAR->Location = System::Drawing::Point(430, 165);
			this->NVAR->Name = L"NVAR";
			this->NVAR->Size = System::Drawing::Size(100, 22);
			this->NVAR->TabIndex = 13;
			// 
			// CrearFunciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 441);
			this->Controls->Add(this->NVAR);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Scala);
			this->Controls->Add(this->size);
			this->Controls->Add(this->labela);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->VRE);
			this->Controls->Add(this->VR);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NF);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Regresar);
			this->Name = L"CrearFunciones";
			this->Text = L"CrearFunciones";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->size))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scala))->EndInit();
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

				cmd->CommandText = "select proc_name from sys.SYSPROCEDURE WHERE proc_defn like 'create procedure%' and creator = 1";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				//dataGridView1->DataSource = dt;
				CON->Close();



				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



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
	};
}
