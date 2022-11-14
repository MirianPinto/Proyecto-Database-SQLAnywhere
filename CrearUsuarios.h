#pragma once
namespace Proyecto_TDatabase {

	
    

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	using namespace System::Data::Odbc;


	/// <summary>
	/// Resumen de CrearUsuarios
	/// </summary>
	public ref class CrearUsuarios : public System::Windows::Forms::Form
	{
	public:


		CrearUsuarios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		CrearUsuarios(Form^ Uusaros)
		{
			usuarios = Uusaros;

			InitializeComponent();
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	public:

		Form^ usuarios;
		String^ leer;
		String^ editar;

	public:

		   String^ eliminar;

		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CrearUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(262, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearUsuarios::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre de usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(259, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(231, 119);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 22);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CrearUsuarios::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(33, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 38);
			this->button3->TabIndex = 6;
			this->button3->Text = L" Leer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CrearUsuarios::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(326, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 38);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CrearUsuarios::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(178, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 38);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CrearUsuarios::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(43, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Privilegios";
			// 
			// CrearUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 407);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"CrearUsuarios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearUsuarios";
			this->Load += gcnew System::EventHandler(this, &CrearUsuarios::CrearUsuarios_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ConnectionDB()
		{
			String^ connString = "Dsn=TBD1;uid=Admin-Mirian;pwd=georgina" ;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "CREATE USER "+ textBox1->Text +" IDENTIFIED BY " + textBox2->Text;
				cmd->ExecuteNonQuery();

				

				this->textBox1->Enabled = false;
				this->textBox2->Enabled = false;
				this->button3->Enabled = true;
				this->button4->Enabled = true;
				this->button5->Enabled = true;
				this->button1->Text = "Aceptar";

				MessageBox::Show("Usuario Creado!", "Usuario Creado!", MessageBoxButtons::OK, MessageBoxIcon::Error);


				CON->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


		void ConnectionDB2(String^ privi)
		{
			String^ connString = "Dsn=TBD1;uid=Admin-Mirian;pwd=georgina";
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = privi;
				cmd->ExecuteNonQuery();

				
				

				

				MessageBox::Show("Usuario autorizado!", "Usuario autorizado!", MessageBoxButtons::OK, MessageBoxIcon::Error);


				CON->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->button1->Text == "Crear") {
			ConnectionDB();
		}
		else if (this->button1->Text == "Aceptar") 
		{
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->button3->Enabled = true;
			this->button4->Enabled = true;
			this->button5->Enabled = true;
		}
		

	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	usuarios->Show();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	//leer
	leer = "Grant SELECT ANY TABLE TO " + textBox1->Text;
	ConnectionDB2(leer);
	this->button3->Enabled = false;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//editar
	editar = "Grant ALTER ANY TABLE TO " + textBox1->Text;
	ConnectionDB2(editar);
	this->button4->Enabled = false;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	//elimianr
	eliminar = "Grant DROP ANY TABLE TO " + textBox1->Text;
	ConnectionDB2(eliminar);
	this->button5->Enabled = false;
}
private: System::Void CrearUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
