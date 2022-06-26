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
	/// Resumen de Jurisdiccion
	/// </summary>
	public ref class Jurisdiccion : public System::Windows::Forms::Form
	{
	public:
		Jurisdiccion(void)
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
		~Jurisdiccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bdd^ data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridJurisdiccion;
	private: System::Windows::Forms::Button^ btnJurisdiccionEliminar;
	protected:


	private: System::Windows::Forms::Button^ btnJurisdiccionEditar;

	private: System::Windows::Forms::Button^ btnJurisdiccionGuardar;

	private: System::Windows::Forms::TextBox^ txtJurisdiccionDepto;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboJurisdiccionID;

	private: System::Windows::Forms::Label^ label3;

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
			this->dataGridJurisdiccion = (gcnew System::Windows::Forms::DataGridView());
			this->btnJurisdiccionEliminar = (gcnew System::Windows::Forms::Button());
			this->btnJurisdiccionEditar = (gcnew System::Windows::Forms::Button());
			this->btnJurisdiccionGuardar = (gcnew System::Windows::Forms::Button());
			this->txtJurisdiccionDepto = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboJurisdiccionID = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridJurisdiccion))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Jurisdicciones";
			// 
			// dataGridJurisdiccion
			// 
			this->dataGridJurisdiccion->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridJurisdiccion->Location = System::Drawing::Point(16, 132);
			this->dataGridJurisdiccion->Name = L"dataGridJurisdiccion";
			this->dataGridJurisdiccion->Size = System::Drawing::Size(504, 230);
			this->dataGridJurisdiccion->TabIndex = 1;
			// 
			// btnJurisdiccionEliminar
			// 
			this->btnJurisdiccionEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnJurisdiccionEliminar->Location = System::Drawing::Point(446, 8);
			this->btnJurisdiccionEliminar->Name = L"btnJurisdiccionEliminar";
			this->btnJurisdiccionEliminar->Size = System::Drawing::Size(75, 23);
			this->btnJurisdiccionEliminar->TabIndex = 27;
			this->btnJurisdiccionEliminar->Text = L"Cancelar";
			this->btnJurisdiccionEliminar->UseVisualStyleBackColor = false;
			this->btnJurisdiccionEliminar->Click += gcnew System::EventHandler(this, &Jurisdiccion::btnJurisdiccionEliminar_Click);
			// 
			// btnJurisdiccionEditar
			// 
			this->btnJurisdiccionEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnJurisdiccionEditar->Location = System::Drawing::Point(288, 8);
			this->btnJurisdiccionEditar->Name = L"btnJurisdiccionEditar";
			this->btnJurisdiccionEditar->Size = System::Drawing::Size(75, 23);
			this->btnJurisdiccionEditar->TabIndex = 26;
			this->btnJurisdiccionEditar->Text = L"Editar";
			this->btnJurisdiccionEditar->UseVisualStyleBackColor = false;
			this->btnJurisdiccionEditar->Click += gcnew System::EventHandler(this, &Jurisdiccion::btnJurisdiccionEditar_Click);
			// 
			// btnJurisdiccionGuardar
			// 
			this->btnJurisdiccionGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnJurisdiccionGuardar->Location = System::Drawing::Point(137, 8);
			this->btnJurisdiccionGuardar->Name = L"btnJurisdiccionGuardar";
			this->btnJurisdiccionGuardar->Size = System::Drawing::Size(75, 23);
			this->btnJurisdiccionGuardar->TabIndex = 25;
			this->btnJurisdiccionGuardar->Text = L"Guardar";
			this->btnJurisdiccionGuardar->UseVisualStyleBackColor = false;
			this->btnJurisdiccionGuardar->Click += gcnew System::EventHandler(this, &Jurisdiccion::btnJurisdiccionGuardar_Click);
			// 
			// txtJurisdiccionDepto
			// 
			this->txtJurisdiccionDepto->Location = System::Drawing::Point(278, 80);
			this->txtJurisdiccionDepto->Name = L"txtJurisdiccionDepto";
			this->txtJurisdiccionDepto->Size = System::Drawing::Size(242, 20);
			this->txtJurisdiccionDepto->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(275, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Departamento/Partido";
			// 
			// comboJurisdiccionID
			// 
			this->comboJurisdiccionID->FormattingEnabled = true;
			this->comboJurisdiccionID->Location = System::Drawing::Point(16, 80);
			this->comboJurisdiccionID->Name = L"comboJurisdiccionID";
			this->comboJurisdiccionID->Size = System::Drawing::Size(121, 21);
			this->comboJurisdiccionID->TabIndex = 30;
			this->comboJurisdiccionID->SelectedIndexChanged += gcnew System::EventHandler(this, &Jurisdiccion::comboJurisdiccionID_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"ID Jurisdiccion";
			// 
			// Jurisdiccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboJurisdiccionID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtJurisdiccionDepto);
			this->Controls->Add(this->btnJurisdiccionEliminar);
			this->Controls->Add(this->btnJurisdiccionEditar);
			this->Controls->Add(this->btnJurisdiccionGuardar);
			this->Controls->Add(this->dataGridJurisdiccion);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Jurisdiccion";
			this->Text = L"Jurisdiccion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridJurisdiccion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void ConsultaJurisdiccion() {
		this->data->abrirConexion();
		this->dataGridJurisdiccion->DataSource = this->data->getJurisdiccion();
		this->data->cerrarConexion();
	}

	private: System::Void Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ConsultaJurisdiccion();
	}

	private: System::Void comboJurisdiccionID_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDJurisdiccion();
		this->data->cerrarConexion();
	}

	private: System::Void btnJurisdiccionGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->insertarJurisdiccion(this->txtJurisdiccionDepto->Text);
		this->data->cerrarConexion();

		this->txtJurisdiccionDepto->Clear();

		this->ConsultaJurisdiccion();
	}

	private: System::Void btnJurisdiccionEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->editarJurisdiccion(this->txtJurisdiccionDepto->Text, this->comboJurisdiccionID->Text);
		this->data->cerrarConexion();

		this->txtJurisdiccionDepto->Clear();

		this->ConsultaJurisdiccion();
	}
	
	private: System::Void btnJurisdiccionEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->eliminarJurisdiccion(this->txtJurisdiccionDepto->Text, this->comboJurisdiccionID->Text);
		this->data->cerrarConexion();

		this->txtJurisdiccionDepto->Clear();

		this->ConsultaJurisdiccion();
	}
};
}
