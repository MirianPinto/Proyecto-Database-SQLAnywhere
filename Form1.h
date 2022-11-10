#pragma once

#include "Opciones.h"

namespace CppCLRWinFormsProject {

	#include "Opciones.h";
	
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::Odbc;

	using namespace Proyecto_TDatabase;
	
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Conexines();

		}

		String^ user;
		


	private: System::Windows::Forms::FlowLayoutPanel^ Conexiones;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	public:

	public:
		System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	public:
		Button^ prubea;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: 
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: 

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Conexiones = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AccessibleName = L"";
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(249, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(213, 347);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(246, 328);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Contraseña";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Conexiones";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Conexiones
			// 
			this->Conexiones->AutoScroll = true;
			this->Conexiones->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Conexiones->CausesValidation = false;
			this->Conexiones->Location = System::Drawing::Point(33, 130);
			this->Conexiones->Name = L"Conexiones";
			this->Conexiones->Size = System::Drawing::Size(486, 174);
			this->Conexiones->TabIndex = 5;
			this->Conexiones->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Conexiones_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(472, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 25);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(332, 8);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(249, 105);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(446, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Actualizar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 453);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Conexiones);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Usuario";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void agregarconexxion(String^ nombre) 
		{
			prubea = gcnew Button();
			prubea->Text = nombre;
			prubea->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			

			Conexiones->Controls->Add(prubea);
		}



		void Conexines()
		{
			try
			{

				//String^ user = textBox2->Text;
				String^ pas = textBox1->Text;
				String^ connString = "Dsn=TBD1;uid=Admin-Mirian;pwd=georgina";
				OdbcConnection^ CON = gcnew OdbcConnection(connString);
				CON->Open();

				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "Select user_name From sys.SYSUSER Where password is not null";
				cmd->ExecuteNonQuery();


				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						//domainUpDown1->Items->Add(row->Cells[0]->Value->ToString());
						agregarconexxion(row->Cells[0]->Value->ToString());

					}
				}


				CON->Close();


				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		
		void ConnectionDB()
		{
			try
			{

				//String^ user = textBox2->Text;
				String^ pas = textBox1->Text;
				String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
				OdbcConnection^ CON = gcnew OdbcConnection(connString);
				CON->Open();
				
				CON->Close();


				
				this->Visible = false;
				Opciones^ tt = gcnew Opciones(this ,user, textBox1->Text);
				tt->Show();

				
				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		ConnectionDB();



	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	



private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Conexiones_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {





}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ Lista = safe_cast<Button^>(sender);
	user = Lista->Text;
	textBox1->Enabled = true;
	button1->Enabled = true;
	
	


}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexiones->Controls->Clear();

	Conexines();



}
};
}
