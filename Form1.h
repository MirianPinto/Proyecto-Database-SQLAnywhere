#pragma once

#include "MyForm.h"

namespace CppCLRWinFormsProject {

	#include "MyForm.h";
	
	
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
		}
		System::Windows::Forms::TextBox^ textBox2;

	public:
		System::Windows::Forms::TextBox^ textBox1;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AccessibleName = L"";
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Location = System::Drawing::Point(300, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(264, 270);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(299, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Contraseña";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(312, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Usuario";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(264, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(727, 501);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Usuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
		
		void ConnectionDB()
		{
			try
			{

				String^ user = textBox2->Text;
				String^ pas = textBox1->Text;
				String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
				OdbcConnection^ CON = gcnew OdbcConnection(connString);
				CON->Open();
				/*OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;
				cmd->CommandText = "SELECT user_name, password FROM SYS.SYSUSERPERM";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				
				CON->Close();*/

				this->Visible = false;
				MyForm^ tt = gcnew MyForm(textBox2->Text, textBox1->Text);
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

		
		

		

		/*String^ Ic = this->textBox1->Text;

		String^ connString = "Dsn=TBD1;uid=Admin-Mirian";
		OdbcConnection^ CON = gcnew OdbcConnection("Dsn=TBD1;uid=Admin-Mirian");

		try
		{
			CON->Open();
			MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}*/
		

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
};
}
