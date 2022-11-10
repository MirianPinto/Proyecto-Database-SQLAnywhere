#pragma once

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
	/// Resumen de DDLTABLAS
	/// </summary>
	public ref class DDLTABLAS : public System::Windows::Forms::Form
	{
	public:
		DDLTABLAS(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ user;

	public:
		Form^ Opciones;


		DDLTABLAS(Form^ opciones, String^ a, String^ b)
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
		~DDLTABLAS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ Sentencia;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Sentencia = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DDLTABLAS::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(121, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Elija el DDL de tabla que quiere ver";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(48, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DDLTABLAS::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(180, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Alter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DDLTABLAS::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(306, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Drop";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DDLTABLAS::button4_Click);
			// 
			// Sentencia
			// 
			this->Sentencia->Location = System::Drawing::Point(112, 196);
			this->Sentencia->Multiline = true;
			this->Sentencia->Name = L"Sentencia";
			this->Sentencia->Size = System::Drawing::Size(227, 176);
			this->Sentencia->TabIndex = 5;
			this->Sentencia->TextChanged += gcnew System::EventHandler(this, &DDLTABLAS::Sentencia_TextChanged);
			// 
			// DDLTABLAS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 404);
			this->Controls->Add(this->Sentencia);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"DDLTABLAS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DDLTABLAS";
			this->Load += gcnew System::EventHandler(this, &DDLTABLAS::DDLTABLAS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Sentencia->Text = "CREATE TABLE nombre_tabla (\r\n"
		+ "columna1 datatype NULL/NOT NULL,\r\n"
		+ "columna2 datatype NULL/NOT NULL,\r\n"
		+ "columna3 datatype NULL/NOT NULL,\r\n"
		+ "...."
		+ "PRIMARY KEY(una o mas columnas), \r\n"
		+ "FOREING KAY(una o mas columnas) REFERENCES tabla_origen \r\n"
		+ "); ";




}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Sentencia->Text = "ALTER TABLE nombre_tabla ..\r\n"
		+ "ADD columna1 datatype NULL/NOT NULL \r\n"
		+ "ADD PRIMARY KEY(una o mas columnas)\r\n"
		+ "ADD FOREING KEY(una o mas columnas) REFERENCES tabla_origen\r\n"
		+ "RENAME nombre_tablaactivo TO nuevo_nombretabla\r\n"
		+ "RENAME nombre_columnaactivo To nuevo_nombre \r\n"
		+ "DROP columna_nombre\r\n"
		+ "DROP PRIMARY KEY(nombre_primeykey)\r\n"
		+ "DROP FOREING KEY(nombre_foreingkey)";
		




}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	Sentencia->Text = "DROP TABLE nombre_tabla;";




}
private: System::Void DDLTABLAS_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Sentencia_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
