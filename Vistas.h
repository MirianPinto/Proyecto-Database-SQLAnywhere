#pragma once
#include "CrearVista.h"
#include "ModificarVista.h"
#include "DDLVistas.h"

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
	/// Resumen de Vistas
	/// </summary>
	public ref class Vistas : public System::Windows::Forms::Form
	{
	public:
		Vistas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Button^ CV;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	public:

		Form^ Opciones;

		Vistas(Form^ opciones, String^ users, String^ pass)
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
			Vistas1();
			
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Vistas()
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
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->CV = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 193);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(593, 297);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(199, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre Vista: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(276, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Vistas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Vistas::button2_Click);
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(326, 74);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(151, 22);
			this->domainUpDown1->TabIndex = 5;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &Vistas::domainUpDown1_SelectedItemChanged);
			// 
			// CV
			// 
			this->CV->Location = System::Drawing::Point(514, 13);
			this->CV->Name = L"CV";
			this->CV->Size = System::Drawing::Size(107, 40);
			this->CV->TabIndex = 6;
			this->CV->Text = L"Crear Vista";
			this->CV->UseVisualStyleBackColor = true;
			this->CV->Click += gcnew System::EventHandler(this, &Vistas::CV_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(514, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 37);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Eliminar Vista";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Vistas::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(514, 126);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 41);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Modificar Vista";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Vistas::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 126);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 36);
			this->button6->TabIndex = 11;
			this->button6->Text = L"DDL";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Vistas::button6_Click);
			// 
			// Vistas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 502);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->CV);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Vistas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vistas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		void Vistas1()
		{
			//dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "SELECT viewname FROM sys.SYSVIEWs where vcreator = 'Admin-Mirian'";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
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
				CON->Close();


				

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void EliminarVista(String^ codigoELiminar)
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



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ConnectionDB();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Opciones->Show();



}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CV_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Visible = false;
	CrearVista^ cp = gcnew CrearVista(this, user, pas);
	cp->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ codigoELiminar1 = "DROP VIEW " + domainUpDown1->Text + "; " ;

	EliminarVista(codigoELiminar1);

	domainUpDown1->Items->Clear();
	Vistas1();


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	ModificarVista^ cp = gcnew ModificarVista(this, user, pas);
	cp->Show();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	DDLVistas^ CT = gcnew DDLVistas(this, user, pas);
	CT->Show();

}
};
}
