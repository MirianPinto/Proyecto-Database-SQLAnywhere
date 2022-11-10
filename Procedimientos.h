#pragma once
#include "CrearProcedimiento.h"
#include "EliminarProcedimiento.h"
#include "DDLProcedi.h"

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
	/// Resumen de Procedimientos
	/// </summary>
	public ref class Procedimientos : public System::Windows::Forms::Form
	{
	public:
		Procedimientos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		
	private: System::Windows::Forms::Button^ CP;
	public:

		Form^ Opciones;
		String^ user;
		String^ pas;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	public:
		String^ acces;
		Procedimientos(Form^ opciones, String^ users, String^ pass)
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
		~Procedimientos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CP = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(39, 206);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(490, 224);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(195, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Procedimientos";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(242, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Procedimientos::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 29);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Procedimientos::button2_Click);
			// 
			// CP
			// 
			this->CP->Location = System::Drawing::Point(407, 12);
			this->CP->Name = L"CP";
			this->CP->Size = System::Drawing::Size(150, 29);
			this->CP->TabIndex = 5;
			this->CP->Text = L"Crear Procedimiento";
			this->CP->UseVisualStyleBackColor = true;
			this->CP->Click += gcnew System::EventHandler(this, &Procedimientos::CP_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(407, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 45);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Eliminar Procedimeinto";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Procedimientos::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 43);
			this->button4->TabIndex = 7;
			this->button4->Text = L"DDL";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Procedimientos::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(407, 127);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 50);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Modificar Procedimiento";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Procedimientos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 453);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->CP);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Procedimientos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Procedimientos";
			this->Load += gcnew System::EventHandler(this, &Procedimientos::Procedimientos_Load);
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
				
				cmd->CommandText = "select proc_name from "+ acces + "sys.SYSPROCEDURE WHERE proc_defn like 'create procedure%' and creator = 1";
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
private: System::Void Procedimientos_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CP_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	CrearProcedimiento^ cp = gcnew CrearProcedimiento(this, user, pas);
	cp->Show();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	
		this->Visible = false;
		EliminarProcedimiento^ cp = gcnew EliminarProcedimiento(this, user, pas);
	cp->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	DDLProcedi^ cp = gcnew DDLProcedi(this, user, pas);
	cp->Show();
	

}
};
}
