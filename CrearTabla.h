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
	/// Resumen de CrearTabla
	/// </summary>
	public ref class CrearTabla : public System::Windows::Forms::Form
	{
	public:
		CrearTabla(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ Crear;
	public:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ NN;
	private: System::Windows::Forms::CheckBox^ PK;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ Uni;

	private: System::Windows::Forms::DomainUpDown^ Tipo;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ size;
	private: System::Windows::Forms::TextBox^ scala;
	private: System::Windows::Forms::DomainUpDown^ Foranea;
	private: System::Windows::Forms::DomainUpDown^ Origen;




	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;




	public:
		String^ codigoCreate = "";
		String^ Primarikey = "PRIMARY KEY( ";
		String^ Primarikey1 = "";

		String^ columnas = "";

		String^ Uniques = "";
		String^ Unique = "";

		String^ origens = "";

		String^ LlaveFK = "";
		String^ LlaveFK1 = "";

		String^ nombretabla;
		Form^ Opciones;

		CrearTabla(Form^ opciones, String^ users, String^ pass)
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
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CrearTabla()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ NombreTabla;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Columnas;


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
			this->NombreTabla = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Columnas = (gcnew System::Windows::Forms::TextBox());
			this->Crear = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->NN = (gcnew System::Windows::Forms::CheckBox());
			this->PK = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Uni = (gcnew System::Windows::Forms::CheckBox());
			this->Tipo = (gcnew System::Windows::Forms::DomainUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->size = (gcnew System::Windows::Forms::TextBox());
			this->scala = (gcnew System::Windows::Forms::TextBox());
			this->Foranea = (gcnew System::Windows::Forms::DomainUpDown());
			this->Origen = (gcnew System::Windows::Forms::DomainUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CrearTabla::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre de tabla:";
			// 
			// NombreTabla
			// 
			this->NombreTabla->Location = System::Drawing::Point(54, 101);
			this->NombreTabla->Name = L"NombreTabla";
			this->NombreTabla->Size = System::Drawing::Size(162, 22);
			this->NombreTabla->TabIndex = 2;
			this->NombreTabla->TextChanged += gcnew System::EventHandler(this, &CrearTabla::NombreTabla_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre de columna";
			// 
			// Columnas
			// 
			this->Columnas->Enabled = false;
			this->Columnas->Location = System::Drawing::Point(54, 177);
			this->Columnas->Name = L"Columnas";
			this->Columnas->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Columnas->Size = System::Drawing::Size(162, 22);
			this->Columnas->TabIndex = 4;
			this->Columnas->TextChanged += gcnew System::EventHandler(this, &CrearTabla::Columnas_TextChanged);
			// 
			// Crear
			// 
			this->Crear->Enabled = false;
			this->Crear->Location = System::Drawing::Point(327, 392);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(104, 41);
			this->Crear->TabIndex = 5;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &CrearTabla::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(246, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Tipo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(491, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Not Null";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(551, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Primary key";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Llave Foranea";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(274, 274);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Origen";
			// 
			// NN
			// 
			this->NN->AutoSize = true;
			this->NN->Enabled = false;
			this->NN->Location = System::Drawing::Point(506, 176);
			this->NN->Name = L"NN";
			this->NN->Size = System::Drawing::Size(18, 17);
			this->NN->TabIndex = 11;
			this->NN->UseVisualStyleBackColor = true;
			// 
			// PK
			// 
			this->PK->AutoSize = true;
			this->PK->Enabled = false;
			this->PK->Location = System::Drawing::Point(580, 175);
			this->PK->Name = L"PK";
			this->PK->Size = System::Drawing::Size(18, 17);
			this->PK->TabIndex = 12;
			this->PK->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(635, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Unique";
			// 
			// Uni
			// 
			this->Uni->AutoSize = true;
			this->Uni->Enabled = false;
			this->Uni->Location = System::Drawing::Point(650, 176);
			this->Uni->Name = L"Uni";
			this->Uni->Size = System::Drawing::Size(18, 17);
			this->Uni->TabIndex = 14;
			this->Uni->UseVisualStyleBackColor = true;
			// 
			// Tipo
			// 
			this->Tipo->Enabled = false;
			this->Tipo->Items->Add(L"varchar");
			this->Tipo->Items->Add(L"char");
			this->Tipo->Items->Add(L"date");
			this->Tipo->Items->Add(L"int");
			this->Tipo->Items->Add(L"numeric");
			this->Tipo->Location = System::Drawing::Point(235, 176);
			this->Tipo->Name = L"Tipo";
			this->Tipo->Size = System::Drawing::Size(73, 22);
			this->Tipo->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(342, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Tamaño          Escala";
			// 
			// size
			// 
			this->size->Enabled = false;
			this->size->Location = System::Drawing::Point(345, 175);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(45, 22);
			this->size->TabIndex = 17;
			// 
			// scala
			// 
			this->scala->Enabled = false;
			this->scala->Location = System::Drawing::Point(426, 176);
			this->scala->Name = L"scala";
			this->scala->Size = System::Drawing::Size(42, 22);
			this->scala->TabIndex = 18;
			// 
			// Foranea
			// 
			this->Foranea->Enabled = false;
			this->Foranea->Location = System::Drawing::Point(54, 304);
			this->Foranea->Name = L"Foranea";
			this->Foranea->Size = System::Drawing::Size(162, 22);
			this->Foranea->TabIndex = 19;
			// 
			// Origen
			// 
			this->Origen->Enabled = false;
			this->Origen->Location = System::Drawing::Point(249, 304);
			this->Origen->Name = L"Origen";
			this->Origen->Size = System::Drawing::Size(120, 22);
			this->Origen->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(297, 228);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 31);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Agregar Columna";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CrearTabla::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(412, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(43, 30);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(449, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 37);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Agregar FK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CrearTabla::button4_Click);
			// 
			// CrearTabla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 502);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Origen);
			this->Controls->Add(this->Foranea);
			this->Controls->Add(this->scala);
			this->Controls->Add(this->size);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Tipo);
			this->Controls->Add(this->Uni);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->PK);
			this->Controls->Add(this->NN);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Crear);
			this->Controls->Add(this->Columnas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NombreTabla);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"CrearTabla";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearTabla";
			this->Load += gcnew System::EventHandler(this, &CrearTabla::CrearTabla_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();


			Tablas();

		}
#pragma endregion

		void Tablas()
		{
			dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "Select T.Table_Name From(SysObject as O join SysTab as T on O.Object_ID = T.Object_ID join SysColumn as C on C.Table_ID = T.Table_ID) " +
					"join SysUser as U Where  U.User_Name = 'Admin-Mirian' Group by T.Table_Name";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						Origen->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				CON->Close();
				//dataGridView1->Visible = true;
				//dataGridView1->DataSource = "";

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

				cmd->CommandText = codigoCreate;
				cmd->ExecuteNonQuery();


				CON->Close();




				MessageBox::Show("Tabla Creada exitosamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


	private: System::Void CrearTabla_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Opciones->Show();


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Uniques->CompareTo("") == 0)
	{
		Uniques = Uniques;
	}
	else
	{
		Uniques = Uniques + ", ";
	}
	
	
	if (LlaveFK->CompareTo("") == 0) 
	{
		Primarikey = Primarikey + ")";

	}
	else 
	{
		Primarikey = Primarikey + "),";

	}


	LlaveFK = LlaveFK + ");";

	codigoCreate = codigoCreate + columnas+ Uniques + Primarikey + LlaveFK;

	ConnectionDB();

	 codigoCreate = "";
	 Primarikey = "PRIMARY KEY( ";
	 Primarikey1 = "";

	 columnas = "";

	 Uniques = "";
	 Unique = "";

	 origens = "";

	 LlaveFK = "";
	 LlaveFK1 = "";
	 NombreTabla->Text = "";

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ nulo;

	String^ nombre = NombreTabla->Text;
	if (nombre->CompareTo(nombretabla) == 0) 
	{

	}
	else 
	{
		nombretabla = nombre;
		codigoCreate = "CREATE TABLE " + nombre + " ( ";
	}


	String^ nombreC = Columnas->Text;

	if (NN->Checked)
	{
		nulo = " NOT NULL";
	}
	else 
	{
		nulo = " NULL";
	}

	String^ tipo = Tipo->Text;

	String^ size1 = size->Text;
	String^ sca = scala->Text;
	String^ primaria;

	if (PK->Checked)
	{
		Crear->Enabled = true;
		primaria = nombreC;
		nulo = " NOT NULL";
		if (Primarikey1->CompareTo("") == 0) {
			Primarikey = Primarikey + nombreC;
			
		}
		else 
		{
			Primarikey = Primarikey + ", " + nombreC;
		}
	}
	else
	{
		primaria = "";
	}
	Primarikey1 = primaria;


	if (size1->CompareTo("") == 0) 
	{
		columnas  = columnas+ nombreC + " " + tipo + nulo + ", ";
	}
	else 
	{
		if (sca->CompareTo("") == 0) 
		{
			columnas = columnas + nombreC + " " + tipo + "(" + size1 + ") " + nulo + ", ";
		}
		else 
		{
			columnas = columnas + nombreC + " " + tipo + "(" + size1 + "," + sca + ") " + nulo + ", ";
		}
	}

	

	if (Uni->Checked) 
	{
		Unique = "UNIQUE (" + nombreC + ")";
		if (Uniques->CompareTo("") == 0) 
		{
			Uniques = Unique;
		}
		else 
		{
			Uniques = Uniques + ", " + Unique;
		}

	}



	String^ a = codigoCreate + columnas + Primarikey;
	
	Foranea->Enabled = true;
	Origen->Enabled  = true;
	Foranea->Items->Add(nombreC);
	Columnas->Text = "";
	size->Text = "";
	scala->Text = "";
	NN->Checked = false;
	PK->Checked = false;
	Uni->Checked = false;
	

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Foraneaa = Foranea->Text;
	String^ origenq = Origen->Text;

	origens = origenq;
	LlaveFK1 = Foraneaa;

	if (Foraneaa->CompareTo("") != 0) 
	{
		LlaveFK1 = "FOREIGN KEY (" + Foraneaa + ") REFERENCES " + origenq;
		if (LlaveFK->CompareTo("") != 0) {
			LlaveFK = LlaveFK + ", " + LlaveFK1;
		}
		else 
		{
			LlaveFK = LlaveFK + LlaveFK1;
		}
	}
	
	
	


}
private: System::Void Columnas_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	Tipo->Enabled = true;
	NN->Enabled = true;
	size->Enabled = true;
	scala->Enabled = true;
	PK->Enabled = true;
	Uni->Enabled = true;


}
private: System::Void NombreTabla_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	Columnas->Enabled = true;
}
};
}
