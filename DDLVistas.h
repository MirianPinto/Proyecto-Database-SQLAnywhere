#pragma once

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DDLVistas
	/// </summary>
	public ref class DDLVistas : public System::Windows::Forms::Form
	{
	public:
		DDLVistas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		String^ user;

	public:
		Form^ Opciones;


		DDLVistas(Form^ opciones, String^ a, String^ b)
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
			//ConnectionDB1();
		}

		String^ pas;
		bool si = false;
		String^ acces;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DDLVistas()
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
			this->Sentencia->TabIndex = 11;
			this->Sentencia->TextChanged += gcnew System::EventHandler(this, &DDLVistas::Sentencia_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(335, 128);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 40);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Drop";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DDLVistas::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(209, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Alter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DDLVistas::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(77, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 40);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DDLVistas::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(150, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Elija el DDL de vista que quiere ver";
			this->label1->Click += gcnew System::EventHandler(this, &DDLVistas::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 34);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DDLVistas::button1_Click);
			// 
			// DDLVistas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 387);
			this->Controls->Add(this->Sentencia);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"DDLVistas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DDLVistas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	Sentencia->Text = "DROP VIEW nombre_view;";


	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	//alter
	Sentencia->Text = "ALTER VIEW viewName \r\n"
		+ "AS query \r\n"
		+ " (column, column2, ...) AS query\r\n"
		+ "AS query WITH READ ONLY\r\n"
		+ "AS query WITH [LOCAL | CASCADED] CHECK OPTION\r\n";


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	//create
	Sentencia->Text = "CREATE VIEW nombre_vista AS\r\n"
		+ "SELECT columna1, columna2.....\r\n"
		+ "FROM nombre_tabla\r\n"
		+ "WHERE [condicion];";
		


	}
private: System::Void Sentencia_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	Opciones->Show();


	}
};
}
