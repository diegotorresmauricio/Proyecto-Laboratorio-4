#pragma once
#include "Bdd.h"

namespace Laboratorio42 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew Bdd();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bdd^ data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtCliApellido;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtCliDNI;

	private: System::Windows::Forms::TextBox^ txtCliNombre;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboIDCliente;
	private: System::Windows::Forms::Button^ btnCliEliminar;


	private: System::Windows::Forms::Button^ btnCliEditar;

	private: System::Windows::Forms::Button^ btnCliGuardar;

	private: System::Windows::Forms::DataGridView^ dataGridCli;
	private: System::Windows::Forms::TextBox^ txtCliMail;
	private: System::Windows::Forms::TextBox^ txtCliTel;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	protected:

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtCliApellido = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCliDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtCliNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboIDCliente = (gcnew System::Windows::Forms::ComboBox());
			this->btnCliEliminar = (gcnew System::Windows::Forms::Button());
			this->btnCliEditar = (gcnew System::Windows::Forms::Button());
			this->btnCliGuardar = (gcnew System::Windows::Forms::Button());
			this->dataGridCli = (gcnew System::Windows::Forms::DataGridView());
			this->txtCliMail = (gcnew System::Windows::Forms::TextBox());
			this->txtCliTel = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCli))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Clientes";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(325, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Apellido";
			// 
			// txtCliApellido
			// 
			this->txtCliApellido->Location = System::Drawing::Point(328, 73);
			this->txtCliApellido->Name = L"txtCliApellido";
			this->txtCliApellido->Size = System::Drawing::Size(192, 20);
			this->txtCliApellido->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(151, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Nombre";
			// 
			// txtCliDNI
			// 
			this->txtCliDNI->Location = System::Drawing::Point(16, 112);
			this->txtCliDNI->Name = L"txtCliDNI";
			this->txtCliDNI->Size = System::Drawing::Size(121, 20);
			this->txtCliDNI->TabIndex = 28;
			// 
			// txtCliNombre
			// 
			this->txtCliNombre->Location = System::Drawing::Point(154, 74);
			this->txtCliNombre->Name = L"txtCliNombre";
			this->txtCliNombre->Size = System::Drawing::Size(168, 20);
			this->txtCliNombre->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"ID";
			// 
			// comboIDCliente
			// 
			this->comboIDCliente->FormattingEnabled = true;
			this->comboIDCliente->Location = System::Drawing::Point(16, 73);
			this->comboIDCliente->Name = L"comboIDCliente";
			this->comboIDCliente->Size = System::Drawing::Size(121, 21);
			this->comboIDCliente->TabIndex = 25;
			this->comboIDCliente->SelectedIndexChanged += gcnew System::EventHandler(this, &Clientes::comboIDCliente_SelectedIndexChanged);
			// 
			// btnCliEliminar
			// 
			this->btnCliEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnCliEliminar->Location = System::Drawing::Point(441, 11);
			this->btnCliEliminar->Name = L"btnCliEliminar";
			this->btnCliEliminar->Size = System::Drawing::Size(75, 23);
			this->btnCliEliminar->TabIndex = 24;
			this->btnCliEliminar->Text = L"Cancelar";
			this->btnCliEliminar->UseVisualStyleBackColor = false;
			this->btnCliEliminar->Click += gcnew System::EventHandler(this, &Clientes::btnCliEliminar_Click);
			// 
			// btnCliEditar
			// 
			this->btnCliEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnCliEditar->Location = System::Drawing::Point(283, 11);
			this->btnCliEditar->Name = L"btnCliEditar";
			this->btnCliEditar->Size = System::Drawing::Size(75, 23);
			this->btnCliEditar->TabIndex = 23;
			this->btnCliEditar->Text = L"Editar";
			this->btnCliEditar->UseVisualStyleBackColor = false;
			this->btnCliEditar->Click += gcnew System::EventHandler(this, &Clientes::btnCliEditar_Click);
			// 
			// btnCliGuardar
			// 
			this->btnCliGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnCliGuardar->Location = System::Drawing::Point(132, 11);
			this->btnCliGuardar->Name = L"btnCliGuardar";
			this->btnCliGuardar->Size = System::Drawing::Size(75, 23);
			this->btnCliGuardar->TabIndex = 22;
			this->btnCliGuardar->Text = L"Guardar";
			this->btnCliGuardar->UseVisualStyleBackColor = false;
			this->btnCliGuardar->Click += gcnew System::EventHandler(this, &Clientes::btnCliGuardar_Click);
			// 
			// dataGridCli
			// 
			this->dataGridCli->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCli->Location = System::Drawing::Point(16, 138);
			this->dataGridCli->Name = L"dataGridCli";
			this->dataGridCli->Size = System::Drawing::Size(504, 226);
			this->dataGridCli->TabIndex = 21;
			// 
			// txtCliMail
			// 
			this->txtCliMail->Location = System::Drawing::Point(154, 112);
			this->txtCliMail->Name = L"txtCliMail";
			this->txtCliMail->Size = System::Drawing::Size(168, 20);
			this->txtCliMail->TabIndex = 33;
			// 
			// txtCliTel
			// 
			this->txtCliTel->Location = System::Drawing::Point(329, 112);
			this->txtCliTel->Name = L"txtCliTel";
			this->txtCliTel->Size = System::Drawing::Size(187, 20);
			this->txtCliTel->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(154, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Email";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(328, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Teléfono";
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtCliTel);
			this->Controls->Add(this->txtCliMail);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtCliApellido);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtCliDNI);
			this->Controls->Add(this->txtCliNombre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboIDCliente);
			this->Controls->Add(this->btnCliEliminar);
			this->Controls->Add(this->btnCliEditar);
			this->Controls->Add(this->btnCliGuardar);
			this->Controls->Add(this->dataGridCli);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCli))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void comboIDCliente_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDCliente();
		this->data->cerrarConexion();
	}

	public: void ConsultaCli() {
		this->data->abrirConexion();
		this->dataGridCli->DataSource = this->data->getCliente();
		this->data->cerrarConexion();
	}

	private: System::Void Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ConsultaCli();
	}

	private: System::Void btnCliGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->insertarCliente(this->txtCliNombre->Text, this->txtCliApellido->Text, this->txtCliDNI->Text, this->txtCliMail->Text, this->txtCliTel->Text);
		this->data->cerrarConexion();

		this->txtCliNombre->Clear();
		this->txtCliApellido->Clear();
		this->txtCliDNI->Clear();
		this->txtCliMail->Clear();
		this->txtCliTel->Clear();

		this->ConsultaCli();
	}

	private: System::Void btnCliEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->editarCliente(this->txtCliNombre->Text, this->txtCliApellido->Text, this->txtCliDNI->Text, this->txtCliMail->Text, this->txtCliTel->Text, this->comboIDCliente->Text);
		this->data->cerrarConexion();

		this->txtCliNombre->Clear();
		this->txtCliApellido->Clear();
		this->txtCliDNI->Clear();
		this->txtCliMail->Clear();
		this->txtCliTel->Clear();

		this->ConsultaCli();
	}

	private: System::Void btnCliEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->eliminarCliente(this->txtCliNombre->Text, this->txtCliApellido->Text, this->txtCliDNI->Text, this->txtCliMail->Text, this->txtCliTel->Text, this->comboIDCliente->Text);
		this->data->cerrarConexion();

		this->txtCliNombre->Clear();
		this->txtCliApellido->Clear();
		this->txtCliDNI->Clear();
		this->txtCliMail->Clear();
		this->txtCliTel->Clear();

		this->ConsultaCli();
	}
};
}
