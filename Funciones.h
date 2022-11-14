#pragma once
#include "CrearFunciones.h"
#include "EliminarFuncion.h"
#include "DDLFunciones.h"
#include "ModificarFunciones.h"

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
	/// Resumen de Funciones
	/// </summary>
	public ref class Funciones : public System::Windows::Forms::Form
	{
	public:
		Funciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}


		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ CF;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	public:

		Form^ Opciones;

		Funciones(Form^ opciones, String^ users, String^ pass)
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
		~Funciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CF = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 212);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(558, 243);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Funciones::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Funciones::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(236, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Funciones";
			// 
			// CF
			// 
			this->CF->Location = System::Drawing::Point(403, 13);
			this->CF->Name = L"CF";
			this->CF->Size = System::Drawing::Size(130, 34);
			this->CF->TabIndex = 4;
			this->CF->Text = L"Crear Funcion";
			this->CF->UseVisualStyleBackColor = true;
			this->CF->Click += gcnew System::EventHandler(this, &Funciones::CF_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(403, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 42);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Eliminar Funcion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Funciones::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(403, 127);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 37);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Modificar funcion";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Funciones::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(13, 87);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 37);
			this->button5->TabIndex = 7;
			this->button5->Text = L"DDL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Funciones::button5_Click);
			// 
			// Funciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 467);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->CF);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Funciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Funciones";
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

				cmd->CommandText = "select proc_name from " + acces + "sys.SYSPROCEDURE WHERE proc_defn like 'create function%' and creator = 1";
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		ConnectionDB();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();
	}
private: System::Void CF_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Visible = false;
	CrearFunciones^ cp = gcnew CrearFunciones(this, user, pas);
	cp->Show();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	
		this->Visible = false;
		EliminarFuncion^ cp = gcnew EliminarFuncion(this, user, pas);
	cp->Show();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	DDLFunciones^ cp = gcnew DDLFunciones(this, user, pas);
	cp->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	ModificarFunciones^ cp = gcnew ModificarFunciones(this, user, pas);
	cp->Show();



}
};
}
