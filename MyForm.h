#pragma once
#include "CrearUsuarios.h"
#include <iostream>
#include "CrearTabla.h"
#include "ModificarTabla.h"
#include "DDLTABLAS.h"

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

	public:
		String^ pas;
		bool si = false;
		String^ acces;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	public:
		Form^ Opciones;


		MyForm( Form^ opciones ,String^ a , String^ b)
		{
			
			Opciones = opciones;
			user = a;
			pas = b;

			if (a->CompareTo("Admin-Mirian") == 0 && b->CompareTo("georgina") == 0)
			{
				acces = "";
			}
			else 
			{
				acces = "\"Admin-Mirian\".";
			}

			InitializeComponent();
			ConnectionDB1();
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(43, 174);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(666, 295);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(317, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre de tabla:";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"");
			this->domainUpDown1->Location = System::Drawing::Point(289, 92);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(223, 22);
			this->domainUpDown1->TabIndex = 3;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &MyForm::domainUpDown1_SelectedItemChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(342, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 31);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Regresar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(610, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 43);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Crear Tabla";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(610, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 38);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Eliminar Tabla";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(610, 105);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 42);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Modificar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 126);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 36);
			this->button6->TabIndex = 10;
			this->button6->Text = L"DDL";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 494);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		void ConnectionDB1()
		{
			dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "Select T.Table_Name From(SysObject as O join SysTab as T on O.Object_ID = T.Object_ID join SysColumn as C on C.Table_ID = T.Table_ID) " +
					"join SysUser as U Where  U.User_Name = 'Admin-Mirian' Group by T.Table_Name";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;
				

				for each (DataGridViewRow^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						domainUpDown1->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				CON->Close();
				dataGridView1->Visible = true;
				dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		

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
				//String^ v = cmd->ExecuteScalar()->ToString();


				CON->Close();

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}
		void EliminarTabla(String^ codigoELiminar)
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = codigoELiminar;
				cmd->ExecuteNonQuery();

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;*/
				CON->Close();




				MessageBox::Show("Se elimino correctamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



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



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	Opciones->Show();
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	CrearTabla^ CT = gcnew CrearTabla(this, user, pas);
	CT->Show();

}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ codigoELiminar1 = "DROP TABLE " + domainUpDown1->Text + "; ";

	EliminarTabla(codigoELiminar1);



}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	
	this->Visible = false;
	ModificarTabla^ CT = gcnew ModificarTabla(this, user, pas);
	CT->Show();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Visible = false;
	DDLTABLAS^ CT = gcnew DDLTABLAS(this, user, pas);
	CT->Show();

}
};
}
