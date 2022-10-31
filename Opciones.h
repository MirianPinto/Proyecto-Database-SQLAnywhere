#pragma once
#include "MyForm.h"
#include "Vistas.h"
#include "Procedimientos.h"
#include "Disparadores.h"
#include "Usuarios.h"
#include "Indices.h"
#include "Funciones.h"
#include "Tablespaces.h"
#include "Secuencias.h"

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Opciones
	/// </summary>
	public ref class Opciones : public System::Windows::Forms::Form
	{
	public:
		String^ pass;
		String^ users;
		Form^ Form1;

		Opciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Opciones(Form^ siguiente, String^ user, String^ pas)
		{
			Form1 = siguiente;
			users = user;
			pass = pas;
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Opciones()
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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(281, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Tablas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Opciones::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(174, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Procedimientos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Opciones::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(174, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Funciones";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Opciones::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(174, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 36);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Vistas";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Opciones::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(174, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 36);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Paquetes";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(339, 133);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(126, 36);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Secuencias ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Opciones::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(339, 237);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(126, 36);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Disparadores";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Opciones::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(339, 289);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(126, 36);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Indices";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Opciones::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(339, 186);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(126, 36);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Tablespaces";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Opciones::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(339, 340);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(126, 36);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Usuarios";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Opciones::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(510, 13);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(126, 36);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Perfil";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(13, 13);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(108, 36);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Regresar";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Opciones::button12_Click);
			// 
			// Opciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 445);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Opciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Opciones";
			this->Load += gcnew System::EventHandler(this, &Opciones::Opciones_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->Visible = false;
		
		Form1->Show();


	}
private: System::Void Opciones_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	MyForm^ MF = gcnew MyForm(this, users, pass);
	MF->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Vistas^ obj = gcnew Vistas(this, users, pass);
	obj->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	Procedimientos^ obj = gcnew Procedimientos(this, users, pass);
	obj->Show();
	

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	Disparadores^ obj = gcnew Disparadores(this, users, pass);
	obj->Show();
	

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Usuarios^ obj = gcnew Usuarios(this, users, pass);
	obj->Show();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	Indices^ obj = gcnew Indices(this, users, pass);
	obj->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Funciones^ obj = gcnew Funciones(this, users, pass);
	obj->Show();

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	Tablespaces^ obj = gcnew Tablespaces(this, users, pass);
	obj->Show();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Visible = false;
	Secuencias^ obj = gcnew Secuencias(this, users, pass);
	obj->Show();

}
};
}
