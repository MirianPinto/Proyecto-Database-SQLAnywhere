#pragma once
#include "CrearTablespace.h"
#include "EliminarTablespaces.h"
#include "DDLdbspaces.h"

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
	/// Resumen de Tablespaces
	/// </summary>
	public ref class Tablespaces : public System::Windows::Forms::Form
	{
	public:
		Tablespaces(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ CD;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	public:

		Form^ Opciones;

		Tablespaces(Form^ opciones, String^ users, String^ pass)
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
		~Tablespaces()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CD = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(219, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DBSPACES";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Tablespaces::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(212, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Tablespaces::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 154);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(505, 271);
			this->dataGridView1->TabIndex = 3;
			// 
			// CD
			// 
			this->CD->Location = System::Drawing::Point(382, 13);
			this->CD->Name = L"CD";
			this->CD->Size = System::Drawing::Size(119, 31);
			this->CD->TabIndex = 4;
			this->CD->Text = L"Crear dbspace";
			this->CD->UseVisualStyleBackColor = true;
			this->CD->Click += gcnew System::EventHandler(this, &Tablespaces::CD_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(382, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 47);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Eliminar dbspace";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Tablespaces::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(382, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 44);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Modificar Dbspaces";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(13, 73);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 35);
			this->button5->TabIndex = 7;
			this->button5->Text = L"DDL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Tablespaces::button5_Click);
			// 
			// Tablespaces
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 437);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->CD);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Tablespaces";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tablespaces";
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
				
				cmd->CommandText = "select dbspace_name FROM " + acces + " sys.SYSDBSPACE";
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


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		ConnectionDB();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();


	}
private: System::Void CD_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	CrearTablespace^ cp = gcnew CrearTablespace(this, user, pas);
	cp->Show();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	EliminarTablespaces^ cp = gcnew EliminarTablespaces(this, user, pas);
	cp->Show();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	DDLdbspaces^ cp = gcnew DDLdbspaces(this, user, pas);
	cp->Show();
	
}
};
}
