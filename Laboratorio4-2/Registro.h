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
	/// Resumen de Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(void)
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
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bdd^ data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtRegistroTel;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtRegistroWeb;

	private: System::Windows::Forms::TextBox^ txtRegistroDir;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboIDJurisdiccion;
	private: System::Windows::Forms::Button^ btnRegistroEliminar;


	private: System::Windows::Forms::Button^ btnRegistroEditar;

	private: System::Windows::Forms::Button^ btnRegistroGuardar;
	private: System::Windows::Forms::DataGridView^ dataGridRegistro;


	private: System::Windows::Forms::ComboBox^ comboIDREgistro;
	private: System::Windows::Forms::Label^ label6;
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
			this->txtRegistroTel = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtRegistroWeb = (gcnew System::Windows::Forms::TextBox());
			this->txtRegistroDir = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboIDJurisdiccion = (gcnew System::Windows::Forms::ComboBox());
			this->btnRegistroEliminar = (gcnew System::Windows::Forms::Button());
			this->btnRegistroEditar = (gcnew System::Windows::Forms::Button());
			this->btnRegistroGuardar = (gcnew System::Windows::Forms::Button());
			this->dataGridRegistro = (gcnew System::Windows::Forms::DataGridView());
			this->comboIDREgistro = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRegistro))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registros";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(283, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Teléfono";
			// 
			// txtRegistroTel
			// 
			this->txtRegistroTel->Location = System::Drawing::Point(283, 112);
			this->txtRegistroTel->Name = L"txtRegistroTel";
			this->txtRegistroTel->Size = System::Drawing::Size(233, 20);
			this->txtRegistroTel->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Pagina web(Turnos)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(280, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Dirección";
			// 
			// txtRegistroWeb
			// 
			this->txtRegistroWeb->Location = System::Drawing::Point(16, 112);
			this->txtRegistroWeb->Name = L"txtRegistroWeb";
			this->txtRegistroWeb->Size = System::Drawing::Size(257, 20);
			this->txtRegistroWeb->TabIndex = 28;
			// 
			// txtRegistroDir
			// 
			this->txtRegistroDir->Location = System::Drawing::Point(283, 73);
			this->txtRegistroDir->Name = L"txtRegistroDir";
			this->txtRegistroDir->Size = System::Drawing::Size(233, 20);
			this->txtRegistroDir->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(148, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Jurisdicción";
			// 
			// comboIDJurisdiccion
			// 
			this->comboIDJurisdiccion->FormattingEnabled = true;
			this->comboIDJurisdiccion->Location = System::Drawing::Point(152, 73);
			this->comboIDJurisdiccion->Name = L"comboIDJurisdiccion";
			this->comboIDJurisdiccion->Size = System::Drawing::Size(121, 21);
			this->comboIDJurisdiccion->TabIndex = 25;
			this->comboIDJurisdiccion->SelectedIndexChanged += gcnew System::EventHandler(this, &Registro::comboIDJurisdiccion_SelectedIndexChanged);
			// 
			// btnRegistroEliminar
			// 
			this->btnRegistroEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnRegistroEliminar->Location = System::Drawing::Point(444, 8);
			this->btnRegistroEliminar->Name = L"btnRegistroEliminar";
			this->btnRegistroEliminar->Size = System::Drawing::Size(75, 23);
			this->btnRegistroEliminar->TabIndex = 24;
			this->btnRegistroEliminar->Text = L"Eliminar";
			this->btnRegistroEliminar->UseVisualStyleBackColor = false;
			this->btnRegistroEliminar->Click += gcnew System::EventHandler(this, &Registro::btnRegistroEliminar_Click);
			// 
			// btnRegistroEditar
			// 
			this->btnRegistroEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnRegistroEditar->Location = System::Drawing::Point(286, 8);
			this->btnRegistroEditar->Name = L"btnRegistroEditar";
			this->btnRegistroEditar->Size = System::Drawing::Size(75, 23);
			this->btnRegistroEditar->TabIndex = 23;
			this->btnRegistroEditar->Text = L"Editar";
			this->btnRegistroEditar->UseVisualStyleBackColor = false;
			this->btnRegistroEditar->Click += gcnew System::EventHandler(this, &Registro::btnRegistroEditar_Click);
			// 
			// btnRegistroGuardar
			// 
			this->btnRegistroGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnRegistroGuardar->Location = System::Drawing::Point(135, 8);
			this->btnRegistroGuardar->Name = L"btnRegistroGuardar";
			this->btnRegistroGuardar->Size = System::Drawing::Size(75, 23);
			this->btnRegistroGuardar->TabIndex = 22;
			this->btnRegistroGuardar->Text = L"Guardar";
			this->btnRegistroGuardar->UseVisualStyleBackColor = false;
			this->btnRegistroGuardar->Click += gcnew System::EventHandler(this, &Registro::btnRegistroGuardar_Click);
			// 
			// dataGridRegistro
			// 
			this->dataGridRegistro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridRegistro->Location = System::Drawing::Point(16, 138);
			this->dataGridRegistro->Name = L"dataGridRegistro";
			this->dataGridRegistro->Size = System::Drawing::Size(504, 226);
			this->dataGridRegistro->TabIndex = 21;
			// 
			// comboIDREgistro
			// 
			this->comboIDREgistro->FormattingEnabled = true;
			this->comboIDREgistro->Location = System::Drawing::Point(19, 73);
			this->comboIDREgistro->Name = L"comboIDREgistro";
			this->comboIDREgistro->Size = System::Drawing::Size(121, 21);
			this->comboIDREgistro->TabIndex = 33;
			this->comboIDREgistro->SelectedIndexChanged += gcnew System::EventHandler(this, &Registro::comboIDREgistro_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 34;
			this->label6->Text = L"ID Registro";
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboIDREgistro);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtRegistroTel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtRegistroWeb);
			this->Controls->Add(this->txtRegistroDir);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboIDJurisdiccion);
			this->Controls->Add(this->btnRegistroEliminar);
			this->Controls->Add(this->btnRegistroEditar);
			this->Controls->Add(this->btnRegistroGuardar);
			this->Controls->Add(this->dataGridRegistro);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Registro";
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &Registro::Registro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRegistro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void ConsultaRegistro() {
		this->data->abrirConexion();
		this->dataGridRegistro->DataSource = this->data->getRegistro();
		this->data->cerrarConexion();
	}

	private: System::Void Registro_Load(System::Object^ sender, System::EventArgs^ e) {
	
		this->ConsultaRegistro();
	}
	
	private: System::Void comboIDREgistro_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDRegistro();
		this->data->cerrarConexion();
	}
	
	private: System::Void comboIDJurisdiccion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDJurisdiccion();
		this->data->cerrarConexion();
	}

	private: System::Void btnRegistroGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->insertarRegistro(this->comboIDJurisdiccion->Text, this->txtRegistroDir->Text, this->txtRegistroWeb->Text, this->txtRegistroTel->Text);
		this->data->cerrarConexion();

		this->txtRegistroDir->Clear();
		this->txtRegistroWeb->Clear();
		this->txtRegistroTel->Clear();

		this->ConsultaRegistro();
	}

	private: System::Void btnRegistroEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->editarRegistro(this->comboIDJurisdiccion->Text, this->txtRegistroDir->Text, this->txtRegistroWeb->Text, this->txtRegistroTel->Text, this->comboIDREgistro->Text);
		this->data->cerrarConexion();

		this->txtRegistroDir->Clear();
		this->txtRegistroWeb->Clear();
		this->txtRegistroTel->Clear();

		this->ConsultaRegistro();
	}
	
	private: System::Void btnRegistroEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->eliminarRegistro(this->comboIDJurisdiccion->Text, this->txtRegistroDir->Text, this->txtRegistroWeb->Text, this->txtRegistroTel->Text, this->comboIDREgistro->Text);
		this->data->cerrarConexion();

		this->txtRegistroDir->Clear();
		this->txtRegistroWeb->Clear();
		this->txtRegistroTel->Clear();

		this->ConsultaRegistro();
	}

};
}
