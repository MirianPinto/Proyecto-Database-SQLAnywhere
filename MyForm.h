#pragma once
#include "CrearUsuarios.h"


namespace Proyecto_TDatabase {
#include "CrearUsuarios.h"
   
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::Odbc;
	using namespace Proyecto_TDatabase;
	



	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		String^ user;
	private: System::Windows::Forms::Button^ button2;
	public:
		String^ pas;
		bool si = false;
		String^ acces;

		MyForm( String^ a , String^ b)
		{
			InitializeComponent();

			user = a;
			pas = b;

			if (a->CompareTo("Admin-Mirian") == 0 && b->CompareTo("georgina") == 0)
			{
				this->button2->Enabled = true;
				acces = "";
			}
			else 
			{
				acces = "\"Admin-Mirian\".";
			}
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Button^ button1;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(36, 141);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(666, 295);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(204, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre de tabla:";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"Estudiante");
			this->domainUpDown1->Items->Add(L"Instructor");
			this->domainUpDown1->Items->Add(L"Seccion");
			this->domainUpDown1->Items->Add(L"Curso");
			this->domainUpDown1->Items->Add(L"Enseña");
			this->domainUpDown1->Items->Add(L"Aula");
			this->domainUpDown1->Items->Add(L"Departamentos");
			this->domainUpDown1->Items->Add(L"Horario");
			this->domainUpDown1->Location = System::Drawing::Point(338, 49);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(223, 22);
			this->domainUpDown1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(306, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 24);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 23);
			this->button2->TabIndex = 5;
			this->button2->Enabled = false;
			this->button2->Text = L"Crear usuario";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 482);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
				
				cmd->CommandText = "Select * from " + acces + domainUpDown1->Text;
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;
				CON->Close();



				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		ConnectionDB();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	CrearUsuarios^ cc = gcnew CrearUsuarios;
	cc->Show();
}
};
}
