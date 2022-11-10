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
	/// Resumen de ModificarTabla
	/// </summary>
	public ref class ModificarTabla : public System::Windows::Forms::Form
	{
	public:
		ModificarTabla(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Form^ Opciones;

		String^ user;

	public:
		String^ pas;

		String^ Accion_Ocurrir = "";

		bool si = false;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::DomainUpDown^ Origen;
	public:

	public:

	public:
		   String^ acces;
		ModificarTabla(Form^ opciones, String^ a, String^ b)
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
			ConnectionDB1();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarTabla()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DomainUpDown^ Tablas;
	private: System::Windows::Forms::DomainUpDown^ Columnas;
	private: System::Windows::Forms::Button^ Agregar;
	private: System::Windows::Forms::Button^ Eliminar;
	private: System::Windows::Forms::Button^ Renombrar;
	private: System::Windows::Forms::DomainUpDown^ Objeto;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ NN;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label6;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Tablas = (gcnew System::Windows::Forms::DomainUpDown());
			this->Columnas = (gcnew System::Windows::Forms::DomainUpDown());
			this->Agregar = (gcnew System::Windows::Forms::Button());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->Renombrar = (gcnew System::Windows::Forms::Button());
			this->Objeto = (gcnew System::Windows::Forms::DomainUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NN = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->Origen = (gcnew System::Windows::Forms::DomainUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarTabla::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(297, 419);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarTabla::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tabla a editar:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(539, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(186, 57);
			this->dataGridView1->TabIndex = 3;
			// 
			// Tablas
			// 
			this->Tablas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Tablas->Location = System::Drawing::Point(33, 159);
			this->Tablas->Name = L"Tablas";
			this->Tablas->Size = System::Drawing::Size(140, 26);
			this->Tablas->TabIndex = 4;
			this->Tablas->SelectedItemChanged += gcnew System::EventHandler(this, &ModificarTabla::Tablas_SelectedItemChanged);
			// 
			// Columnas
			// 
			this->Columnas->Enabled = false;
			this->Columnas->Location = System::Drawing::Point(28, 315);
			this->Columnas->Name = L"Columnas";
			this->Columnas->Size = System::Drawing::Size(120, 22);
			this->Columnas->TabIndex = 5;
			this->Columnas->SelectedItemChanged += gcnew System::EventHandler(this, &ModificarTabla::Columnas_SelectedItemChanged);
			// 
			// Agregar
			// 
			this->Agregar->Location = System::Drawing::Point(33, 228);
			this->Agregar->Name = L"Agregar";
			this->Agregar->Size = System::Drawing::Size(140, 39);
			this->Agregar->TabIndex = 7;
			this->Agregar->Text = L"Agregar";
			this->Agregar->UseVisualStyleBackColor = true;
			this->Agregar->Click += gcnew System::EventHandler(this, &ModificarTabla::button3_Click);
			// 
			// Eliminar
			// 
			this->Eliminar->Location = System::Drawing::Point(179, 228);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(113, 39);
			this->Eliminar->TabIndex = 8;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &ModificarTabla::button4_Click);
			// 
			// Renombrar
			// 
			this->Renombrar->Location = System::Drawing::Point(309, 228);
			this->Renombrar->Name = L"Renombrar";
			this->Renombrar->Size = System::Drawing::Size(96, 39);
			this->Renombrar->TabIndex = 10;
			this->Renombrar->Text = L"Renombrar";
			this->Renombrar->UseVisualStyleBackColor = true;
			this->Renombrar->Click += gcnew System::EventHandler(this, &ModificarTabla::button6_Click);
			// 
			// Objeto
			// 
			this->Objeto->Items->Add(L"Columna");
			this->Objeto->Items->Add(L"Llave Primaria");
			this->Objeto->Items->Add(L"Llave Foranea");
			this->Objeto->Items->Add(L"Tabla");
			this->Objeto->Location = System::Drawing::Point(235, 159);
			this->Objeto->Name = L"Objeto";
			this->Objeto->Size = System::Drawing::Size(120, 22);
			this->Objeto->TabIndex = 16;
			this->Objeto->SelectedItemChanged += gcnew System::EventHandler(this, &ModificarTabla::domainUpDown1_SelectedItemChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(235, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Objeto a alterar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Accion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(176, 284);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 16);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Nuevo nombre:";
			// 
			// NN
			// 
			this->NN->Enabled = false;
			this->NN->Location = System::Drawing::Point(179, 315);
			this->NN->Name = L"NN";
			this->NN->Size = System::Drawing::Size(100, 22);
			this->NN->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Columna a alterar:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(421, 159);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(304, 211);
			this->dataGridView2->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(421, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Tabla seleccionada;";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(297, 284);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(47, 16);
			this->label->TabIndex = 24;
			this->label->Text = L"Origen";
			// 
			// Origen
			// 
			this->Origen->Enabled = false;
			this->Origen->Location = System::Drawing::Point(297, 315);
			this->Origen->Name = L"Origen";
			this->Origen->Size = System::Drawing::Size(118, 22);
			this->Origen->TabIndex = 25;
			// 
			// ModificarTabla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 511);
			this->Controls->Add(this->Origen);
			this->Controls->Add(this->label);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->NN);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Objeto);
			this->Controls->Add(this->Renombrar);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->Agregar);
			this->Controls->Add(this->Columnas);
			this->Controls->Add(this->Tablas);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ModificarTabla";
			this->Text = L"ModificarTabla";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Tablas3()
		{
			dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "Select  T.Table_Name, Column_Name From(SysObject as O join SysTab as T on O.Object_ID = T.Object_ID join SysColumn as C on C.Table_ID = T.Table_ID)"
					+ "join SysUser as U Where  U.User_Name = 'Admin-Mirian' and T.Table_Name = '" + Tablas->Text + "';";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;

				Columnas->Text = "";
				Columnas->Items->Clear();

				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						Columnas->Items->Add(row->Cells[1]->Value->ToString());
					}
				}

				


				CON->Close();
				dataGridView1->Visible = false;
				//dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void ConnectionDB1()
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
						Tablas->Items->Add(row->Cells[0]->Value->ToString());
						Origen->Items->Add(row->Cells[0]->Value->ToString());
					}
				}

				


				CON->Close();
				//dataGridView1->Visible = true;
				dataGridView1->DataSource = "";

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

				cmd->CommandText = "Select * from " + acces + Tablas->Text;
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView2->DataSource = dt;
				//String^ v = cmd->ExecuteScalar()->ToString();


				CON->Close();

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void sql(String^ consulta)
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = consulta;
				cmd->ExecuteNonQuery();

				//DataTable^ dt = gcnew DataTable();
				//OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				//dp->Fill(dt);
				//dataGridView1->DataSource = dt;
				CON->Close();

				//CON->Close();

				MessageBox::Show("Alteracion hecha!", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();


	}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

	if (Objeto->Text->CompareTo("Llave Primaria") == 0 )
	{
		Renombrar->Enabled = false;
		Agregar->Enabled = true;
		Eliminar->Enabled = true;

	}
	else if (Objeto->Text->CompareTo("Llave Foranea") == 0)
	{
		
		Renombrar->Enabled = false;
		Agregar->Enabled = true;
		Eliminar->Enabled = true;

	}
	else if (Objeto->Text->CompareTo("Tabla") == 0) 
	{

		Renombrar->Enabled = true;
		Agregar->Enabled = false;
		Eliminar->Enabled = false;
	}
	else if (Objeto->Text->CompareTo("Columna") == 0)
	{
		Renombrar->Enabled = true;
		Agregar->Enabled = true;
		Eliminar->Enabled = true;
	}


	
}
private: System::Void Tablas_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

	ConnectionDB();

	Columnas->ResetBindings();
	Tablas3();

}
private: System::Void Columnas_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   //agregar
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Objeto->Text->CompareTo("Llave Primaria") == 0)
	{
		Columnas->Enabled = true;

		NN->Enabled = false;
		Origen->Enabled=false;

	}
	else if (Objeto->Text->CompareTo("Llave Foranea") == 0)
	{

		Columnas->Enabled = true;

		NN->Enabled = false;
		Origen->Enabled = true;

	}
	else if (Objeto->Text->CompareTo("Columna") == 0)
	{
		Columnas->Enabled = false;
		NN->Enabled = true;
		Origen->Enabled = false;
	}

}

	   //eliminar
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Objeto->Text->CompareTo("Llave Primaria") == 0)
	{
		Columnas->Enabled = true;

		NN->Enabled = false;
		Origen->Enabled = false;

	}
	else if (Objeto->Text->CompareTo("Llave Foranea") == 0)
	{

		Columnas->Enabled = true;

		NN->Enabled = false;
		Origen->Enabled = false;

	}
	else if (Objeto->Text->CompareTo("Columna") == 0)
	{
		Columnas->Enabled = true;

		NN->Enabled = false;
		Origen->Enabled = false;

		Renombrar->Enabled = false;
		Agregar->Enabled = false;
	}


}

	   //modifica
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Objeto->Text->CompareTo("Tabla") == 0)
	{
		Columnas->Enabled = false;

		NN->Enabled = true;
		Origen->Enabled = false;

	}
	else if (Objeto->Text->CompareTo("Columna") == 0)
	{
		Columnas->Enabled = true;

		NN->Enabled = true;
		Origen->Enabled = false;
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Agregar->Enabled) 
	{
		if (Objeto->Text->CompareTo("Llave Primaria") == 0)
		{
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " ADD PRIMARY KEY( " + Columnas->Text + ");";
			

		}
		else if (Objeto->Text->CompareTo("Llave Foranea") == 0)
		{
			
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " ADD FOREING KEY( " + Columnas->Text + ") REFERENCES " + Origen->Text;
			
		}
		else
		{
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " ADD " + NN->Text;
			
		}

	}
	
	if (Eliminar->Enabled) 
	{
		if (Objeto->Text->CompareTo("Llave Primaria") == 0)
		{
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " DROP PRIMARY KEY( " + Columnas->Text + ");";
			

		}
		else if (Objeto->Text->CompareTo("Llave Foranea") == 0)
		{
			
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " DROP FOREING KEY( " + Columnas->Text + ");";
			
		}
		else
		{
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " DROP " + Columnas->Text;
			
		}
	}
	
	if (Renombrar->Enabled) 
	{
		if (Objeto->Text->CompareTo("Tabla") == 0) {
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " RENAME " + Tablas->Text + " TO " + NN->Text;
		}
		else 
		{
			Accion_Ocurrir = "ALTER TABLE " + Tablas->Text + " RENAME " + Columnas->Text + " TO " + NN->Text;
		}
	}


	sql(Accion_Ocurrir);


	Columnas->Enabled = false;

	NN->Enabled = false;
	Origen->Enabled = false;


	Renombrar->Enabled = true;
	Agregar->Enabled = true;
	Eliminar->Enabled = true;

}
};
}
