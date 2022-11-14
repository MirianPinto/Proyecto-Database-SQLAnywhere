#pragma once

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DDLFunciones
	/// </summary>
	public ref class DDLFunciones : public System::Windows::Forms::Form
	{
	public:
		DDLFunciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ user;

	public:
		Form^ Opciones;


		DDLFunciones(Form^ opciones, String^ a, String^ b)
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
		~DDLFunciones()
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
			this->Sentencia->TabIndex = 29;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(335, 128);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 40);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Drop";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DDLFunciones::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(209, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 40);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Alter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DDLFunciones::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(77, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 40);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DDLFunciones::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 16);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Elija el DDL de la Funcion que quiere ver";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 34);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DDLFunciones::button1_Click);
			// 
			// DDLFunciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 413);
			this->Controls->Add(this->Sentencia);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"DDLFunciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DDLFunciones";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//create
		Sentencia->Text = "CREATE FUNCTION nombre_funcion( IN para1 datatype, IN para2 datatype, ....) \r\n"
			+ "RETURNS tipo_dato_valor_revuelto\r\n"
			+ "DETERMINISTIC\r\n"
			+ "BEGIN\r\n"
			+ "DECLARE nombre_variable tipo_dato_valor_revuelto;\r\n"
			+ "SET declaracion_de_funcion;\r\n"
			+ "RETURN nombre_variable;\r\n"
			+ "END";

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	//alter
	Sentencia->Text = "ALTER FUNCTION nombre_funcion( IN para1 datatype, IN para2 datatype, ....) \r\n"
		+ "RETURNS tipo_dato_valor_revuelto\r\n"
		+ "DETERMINISTIC\r\n"
		+ "BEGIN\r\n"
		+ "DECLARE nueva_nombre_variable tipo_dato_valor_revuelto;\r\n"
		+ "SET nueva_declaracion_de_funcion;\r\n"
		+ "RETURN nueva_nombre_variable;\r\n"
		+ "END";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//drop

	Sentencia->Text = "DROP FUNCTION nombre_funcion;";

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



	this->Visible = false;
	Opciones->Show();
}
};
}
