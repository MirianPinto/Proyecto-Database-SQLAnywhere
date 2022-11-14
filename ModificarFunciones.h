#pragma once
#include <iostream>
#include <string>
//#include <msclr\marshal.h>




namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;
	using namespace Proyecto_TDatabase;
	using namespace std;

	using namespace std;
	//using namespace System;
	//using namespace System;
	//using namespace msclr::interop;


	//using namespace msclr::interop;
	/// <summary>
	/// Resumen de ModificarFunciones
	/// </summary>
	public ref class ModificarFunciones : public System::Windows::Forms::Form
	{
	public:
		ModificarFunciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Form^ Opciones;
		String^ user;
		String^ pas;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:
		String^ acces;
		ModificarFunciones(Form^ opciones, String^ users, String^ pass)
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
			Funcioenes();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarFunciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ Alter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Alter = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(268, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Alterar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarFunciones::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarFunciones::button2_Click);
			// 
			// Alter
			// 
			this->Alter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Alter->Location = System::Drawing::Point(56, 142);
			this->Alter->Multiline = true;
			this->Alter->Name = L"Alter";
			this->Alter->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Alter->Size = System::Drawing::Size(540, 263);
			this->Alter->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(255, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Funcion a modificar";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(244, 100);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(184, 22);
			this->domainUpDown1->TabIndex = 4;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &ModificarFunciones::domainUpDown1_SelectedItemChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(538, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(58, 22);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->Visible = false;
			// 
			// ModificarFunciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 499);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Alter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ModificarFunciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModificarFunciones";
			this->Load += gcnew System::EventHandler(this, &ModificarFunciones::ModificarFunciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion\

		void Funcioenes1()
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "select proc_defn, proc_name from sys.SYSPROCEDURE WHERE proc_defn like 'create function%' and creator = 1 and proc_name = '" + domainUpDown1->Text+ "';";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;
				CON->Close();






				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {

						String^ s = row->Cells[0]->Value->ToString();


						Alter->Text = s->Replace("create", "ALTER");
					}
				}

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void Funcioenes()
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


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						domainUpDown1->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void Modificarfunci(String^ codigoELiminar)
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




				MessageBox::Show("Se modifico correctamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

	private: System::Void ModificarFunciones_Load(System::Object^ sender, System::EventArgs^ e) {



	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Visible = false;
	Opciones->Show();



}





private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	Funcioenes1();




}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	
	Modificarfunci(Alter->Text);


}
};
}
