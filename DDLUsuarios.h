#pragma once

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DDLUsuarios
	/// </summary>
	public ref class DDLUsuarios : public System::Windows::Forms::Form
	{
	public:
		DDLUsuarios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		String^ user;

	public:
		Form^ Opciones;


		DDLUsuarios(Form^ opciones)
		{

			Opciones = opciones;
		

			
			InitializeComponent();
			//ConnectionDB1();
		}

		String^ pas;
		bool si = false;
		String^ acces;
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~DDLUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Sentencia;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Sentencia = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Sentencia
			// 
			this->Sentencia->Location = System::Drawing::Point(141, 187);
			this->Sentencia->Multiline = true;
			this->Sentencia->Name = L"Sentencia";
			this->Sentencia->Size = System::Drawing::Size(227, 176);
			this->Sentencia->TabIndex = 41;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(335, 128);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 40);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Drop";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DDLUsuarios::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(209, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 40);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Alter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DDLUsuarios::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(73, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 40);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DDLUsuarios::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 16);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Elija el DDL del indice que quiere ver";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 34);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DDLUsuarios::button1_Click);
			// 
			// DDLUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 420);
			this->Controls->Add(this->Sentencia);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"DDLUsuarios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DDLUsuarios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



		this->Visible = false;
		Opciones->Show();


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Sentencia->Text = "CREATE USER nombre_usuario IDENTIFIED BY contrase�a_usuario;\r\n";


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Sentencia->Text = "GRANT ALL PRIVILEGES ON *.*/table_name .... TO nombre_usuario;\r\n"
		+ "\r\nALTER USER nombre_usuario [ IDENTIFIED BY contrase�a ]\r\n"
		+ " [ LOGIN POLICY nombre_politica ]\r\n"
		+ " [ FORCE PASSWORD CHANGE { ON | OFF } ]\r\n";


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	Sentencia->Text = "DROP USER nombre_usuario;\r\n";

}
};
}
