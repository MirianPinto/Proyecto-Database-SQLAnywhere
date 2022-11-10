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
	/// Resumen de EliminarProcedimiento
	/// </summary>
	public ref class EliminarProcedimiento : public System::Windows::Forms::Form
	{
	public:
		EliminarProcedimiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:

		Form^ Opciones;

		EliminarProcedimiento(Form^ opciones, String^ users, String^ pass)
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
			Procedimientos();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EliminarProcedimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

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
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(147, 156);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(128, 22);
			this->domainUpDown1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(144, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Procedimiento";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 32);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EliminarProcedimiento::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 34);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Regresar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EliminarProcedimiento::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(229, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(45, 52);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->Visible = false;
			// 
			// EliminarProcedimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 358);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->domainUpDown1);
			this->Name = L"EliminarProcedimiento";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EliminarProcedimiento";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Procedimientos()
		{
			dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "select proc_name from " + acces + "sys.SYSPROCEDURE WHERE proc_defn like 'create procedure%' and creator = 1";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						domainUpDown1->Items->Add(row->Cells[0]->Value->ToString());
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

		void EliminarpROCE(String^ codigoELiminar)
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




				MessageBox::Show("Se elimino correctamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		Opciones->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ codigoELiminar1 = "DROP PROCEDURE " + domainUpDown1->Text + "; ";

	EliminarpROCE(codigoELiminar1);


}
};
}
