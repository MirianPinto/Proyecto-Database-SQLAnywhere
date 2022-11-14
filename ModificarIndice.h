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
	/// Resumen de ModificarIndice
	/// </summary>
	public ref class ModificarIndice : public System::Windows::Forms::Form
	{
	public:
		ModificarIndice(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		Form^ Opciones;
		String^ user;
		String^ pas;

		String^ acces;
		ModificarIndice(Form^ opciones, String^ users, String^ pass)
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
			Indices();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarIndice()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Alterar;

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
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Alterar = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarIndice::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(230, 412);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Alterar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarIndice::button2_Click);
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(196, 142);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(155, 22);
			this->domainUpDown1->TabIndex = 2;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &ModificarIndice::domainUpDown1_SelectedItemChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(555, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(30, 37);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(210, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Indice a alterar:";
			// 
			// Alterar
			// 
			this->Alterar->Location = System::Drawing::Point(79, 180);
			this->Alterar->Multiline = true;
			this->Alterar->Name = L"Alterar";
			this->Alterar->Size = System::Drawing::Size(411, 214);
			this->Alterar->TabIndex = 5;
			// 
			// ModificarIndice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(597, 480);
			this->Controls->Add(this->Alterar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ModificarIndice";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModificarIndice";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void Ind2()
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;


				cmd->CommandText = "SELECT iname as Nombre, tname as Tabla, indextype as Tipo, colnames as columna FROM sys.SYSINDEXES Where icreator = 'Admin-Mirian' and indextype = 'Non-unique' and iname = '" + domainUpDown1->Text +  "'";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;
				CON->Close();

				String^ codi = "";
				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						String^ s = row->Cells[0]->Value->ToString();

						codi = "ALTER INDEX " + domainUpDown1->Text + " ON " + row->Cells[1]->Value->ToString() + "/*CLUSTERED|NONCLUSTERED  O RENAME AS Nuevo_nombre*/; ";
						
					}
				}



				Alterar->Text = codi;
				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


		void Indices()
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;


				cmd->CommandText = "SELECT iname as Nombre, tname as Tabla, indextype as Tipo, colnames as columna FROM sys.SYSINDEXES Where icreator = 'Admin-Mirian' and indextype = 'Non-unique'";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;
				CON->Close();


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						domainUpDown1->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}
		void Modificarinde(String^ codigoELiminar)
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = codigoELiminar;
				cmd->ExecuteNonQuery();

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;*/
				CON->Close();




				MessageBox::Show("Se modifico correctamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



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
		//regr
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	Modificarinde(Alterar->Text);

}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

	Ind2();
}
};
}
