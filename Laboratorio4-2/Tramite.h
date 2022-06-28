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
	/// Resumen de Inmobiliario
	/// </summary>
	public ref class Inmobiliario : public System::Windows::Forms::Form
	{
	public:
		Inmobiliario(void)
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
		~Inmobiliario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bdd^ data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ fechaFinTramite;





	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::ComboBox^ comboIDJuzgadoTramite;




	private: System::Windows::Forms::Button^ btnTramiteEliminar;


	private: System::Windows::Forms::Button^ btnTramiteEditar;


	private: System::Windows::Forms::Button^ btnTramiteGuardar;
	private: System::Windows::Forms::DataGridView^ dataGridTramites;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ fechaInicioTramite;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ ComboIDCLiTramite;
	private: System::Windows::Forms::ComboBox^ comboIDTramite;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboIDClienteTramite;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboRubroTramite;
	private: System::Windows::Forms::ComboBox^ comboTipoTramite;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->fechaFinTramite = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboIDJuzgadoTramite = (gcnew System::Windows::Forms::ComboBox());
			this->btnTramiteEliminar = (gcnew System::Windows::Forms::Button());
			this->btnTramiteEditar = (gcnew System::Windows::Forms::Button());
			this->btnTramiteGuardar = (gcnew System::Windows::Forms::Button());
			this->dataGridTramites = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fechaInicioTramite = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ComboIDCLiTramite = (gcnew System::Windows::Forms::ComboBox());
			this->comboIDTramite = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboIDClienteTramite = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboRubroTramite = (gcnew System::Windows::Forms::ComboBox());
			this->comboTipoTramite = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTramites))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tramites";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(305, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Fecha finalización";
			// 
			// fechaFinTramite
			// 
			this->fechaFinTramite->Location = System::Drawing::Point(308, 146);
			this->fechaFinTramite->Name = L"fechaFinTramite";
			this->fechaFinTramite->Size = System::Drawing::Size(200, 20);
			this->fechaFinTramite->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Juzgado";
			// 
			// comboIDJuzgadoTramite
			// 
			this->comboIDJuzgadoTramite->FormattingEnabled = true;
			this->comboIDJuzgadoTramite->Location = System::Drawing::Point(16, 146);
			this->comboIDJuzgadoTramite->Name = L"comboIDJuzgadoTramite";
			this->comboIDJuzgadoTramite->Size = System::Drawing::Size(121, 21);
			this->comboIDJuzgadoTramite->TabIndex = 27;
			this->comboIDJuzgadoTramite->SelectedIndexChanged += gcnew System::EventHandler(this, &Inmobiliario::comboIDJuzgadoTramite_SelectedIndexChanged);
			// 
			// btnTramiteEliminar
			// 
			this->btnTramiteEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnTramiteEliminar->Location = System::Drawing::Point(445, 6);
			this->btnTramiteEliminar->Name = L"btnTramiteEliminar";
			this->btnTramiteEliminar->Size = System::Drawing::Size(75, 23);
			this->btnTramiteEliminar->TabIndex = 25;
			this->btnTramiteEliminar->Text = L"Eliminar";
			this->btnTramiteEliminar->UseVisualStyleBackColor = false;
			this->btnTramiteEliminar->Click += gcnew System::EventHandler(this, &Inmobiliario::btnTramiteEliminar_Click);
			// 
			// btnTramiteEditar
			// 
			this->btnTramiteEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnTramiteEditar->Location = System::Drawing::Point(287, 6);
			this->btnTramiteEditar->Name = L"btnTramiteEditar";
			this->btnTramiteEditar->Size = System::Drawing::Size(75, 23);
			this->btnTramiteEditar->TabIndex = 24;
			this->btnTramiteEditar->Text = L"Editar";
			this->btnTramiteEditar->UseVisualStyleBackColor = false;
			this->btnTramiteEditar->Click += gcnew System::EventHandler(this, &Inmobiliario::btnTramiteEditar_Click);
			// 
			// btnTramiteGuardar
			// 
			this->btnTramiteGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnTramiteGuardar->Location = System::Drawing::Point(136, 6);
			this->btnTramiteGuardar->Name = L"btnTramiteGuardar";
			this->btnTramiteGuardar->Size = System::Drawing::Size(75, 23);
			this->btnTramiteGuardar->TabIndex = 23;
			this->btnTramiteGuardar->Text = L"Guardar";
			this->btnTramiteGuardar->UseVisualStyleBackColor = false;
			this->btnTramiteGuardar->Click += gcnew System::EventHandler(this, &Inmobiliario::btnTramiteGuardar_Click);
			// 
			// dataGridTramites
			// 
			this->dataGridTramites->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridTramites->Location = System::Drawing::Point(16, 189);
			this->dataGridTramites->Name = L"dataGridTramites";
			this->dataGridTramites->Size = System::Drawing::Size(504, 180);
			this->dataGridTramites->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(305, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Fecha";
			// 
			// fechaInicioTramite
			// 
			this->fechaInicioTramite->Location = System::Drawing::Point(308, 102);
			this->fechaInicioTramite->Name = L"fechaInicioTramite";
			this->fechaInicioTramite->Size = System::Drawing::Size(200, 20);
			this->fechaInicioTramite->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"ID Cliente";
			// 
			// ComboIDCLiTramite
			// 
			this->ComboIDCLiTramite->FormattingEnabled = true;
			this->ComboIDCLiTramite->Location = System::Drawing::Point(16, 101);
			this->ComboIDCLiTramite->Name = L"ComboIDCLiTramite";
			this->ComboIDCLiTramite->Size = System::Drawing::Size(121, 21);
			this->ComboIDCLiTramite->TabIndex = 18;
			this->ComboIDCLiTramite->SelectedIndexChanged += gcnew System::EventHandler(this, &Inmobiliario::ComboIDCLiTramite_SelectedIndexChanged);
			// 
			// comboIDTramite
			// 
			this->comboIDTramite->FormattingEnabled = true;
			this->comboIDTramite->Location = System::Drawing::Point(16, 57);
			this->comboIDTramite->Name = L"comboIDTramite";
			this->comboIDTramite->Size = System::Drawing::Size(121, 21);
			this->comboIDTramite->TabIndex = 34;
			this->comboIDTramite->SelectedIndexChanged += gcnew System::EventHandler(this, &Inmobiliario::comboIDTramite_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 35;
			this->label6->Text = L"ID Tramite";
			// 
			// comboIDClienteTramite
			// 
			this->comboIDClienteTramite->FormattingEnabled = true;
			this->comboIDClienteTramite->Location = System::Drawing::Point(156, 145);
			this->comboIDClienteTramite->Name = L"comboIDClienteTramite";
			this->comboIDClienteTramite->Size = System::Drawing::Size(121, 21);
			this->comboIDClienteTramite->TabIndex = 36;
			this->comboIDClienteTramite->SelectedIndexChanged += gcnew System::EventHandler(this, &Inmobiliario::comboIDClienteTramite_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(153, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"ID Empleado";
			// 
			// comboRubroTramite
			// 
			this->comboRubroTramite->FormattingEnabled = true;
			this->comboRubroTramite->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Automotor", L"Judicial", L"Inmobiliario" });
			this->comboRubroTramite->Location = System::Drawing::Point(241, 57);
			this->comboRubroTramite->Name = L"comboRubroTramite";
			this->comboRubroTramite->Size = System::Drawing::Size(121, 21);
			this->comboRubroTramite->TabIndex = 38;
			this->comboRubroTramite->SelectedIndexChanged += gcnew System::EventHandler(this, &Inmobiliario::comboRubroTramite_SelectedIndexChanged);
			// 
			// comboTipoTramite
			// 
			this->comboTipoTramite->FormattingEnabled = true;
			this->comboTipoTramite->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Alta", L"Baja", L"Transferencia" });
			this->comboTipoTramite->Location = System::Drawing::Point(387, 57);
			this->comboTipoTramite->Name = L"comboTipoTramite";
			this->comboTipoTramite->Size = System::Drawing::Size(121, 21);
			this->comboTipoTramite->TabIndex = 39;
			this->comboTipoTramite->SelectedIndexChanged += gcnew System::EventHandler(this, &Inmobiliario::comboTipoTramite_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(241, 41);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Rubro";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(387, 41);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 13);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Tipo";
			// 
			// Inmobiliario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboTipoTramite);
			this->Controls->Add(this->comboRubroTramite);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboIDClienteTramite);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboIDTramite);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->fechaFinTramite);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboIDJuzgadoTramite);
			this->Controls->Add(this->btnTramiteEliminar);
			this->Controls->Add(this->btnTramiteEditar);
			this->Controls->Add(this->btnTramiteGuardar);
			this->Controls->Add(this->dataGridTramites);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->fechaInicioTramite);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ComboIDCLiTramite);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inmobiliario";
			this->Text = L"Inmobiliario";
			this->Load += gcnew System::EventHandler(this, &Inmobiliario::Inmobiliario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTramites))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void ConsultaTramites() {
		this->data->abrirConexion();
		this->dataGridTramites->DataSource = this->data->getTramite();
		this->data->cerrarConexion();
	}

	private: System::Void Inmobiliario_Load(System::Object^ sender, System::EventArgs^ e) {
	
		this->ConsultaTramites();
	}

	private: System::Void comboIDTramite_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDTramite();
		this->data->cerrarConexion();
	}
	
	private: System::Void comboRubroTramite_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getRubroTramite();
		this->data->cerrarConexion();
	}

	private: System::Void comboTipoTramite_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getTipoTramite();
		this->data->cerrarConexion();
	}
	
	private: System::Void ComboIDCLiTramite_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDCliente();
		this->data->cerrarConexion();
	}

	private: System::Void comboIDClienteTramite_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDEmpleado();
		this->data->cerrarConexion();
	}

	private: System::Void comboIDjurisdiccionTramite_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDJurisdiccion();
		this->data->cerrarConexion();
	}

	private: System::Void comboIDJuzgadoTramite_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDJuzgado();
		this->data->cerrarConexion();
	}

	private: System::Void btnTramiteGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->insertarTramite(this->comboIDClienteTramite->Text, this->ComboIDCLiTramite->Text, this->comboIDJuzgadoTramite->Text, this->comboRubroTramite->Text, this->comboTipoTramite->Text, this->fechaInicioTramite->Text, this->fechaFinTramite->Text);
		this->data->cerrarConexion();

		this->ConsultaTramites();
	}
	
	private: System::Void btnTramiteEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->editarTramite(this->comboIDTramite->Text, this->comboIDClienteTramite->Text, this->ComboIDCLiTramite->Text, this->comboIDJuzgadoTramite->Text, this->comboRubroTramite->Text, this->comboTipoTramite->Text, this->fechaInicioTramite->Text, this->fechaFinTramite->Text);
		this->data->cerrarConexion();

		this->ConsultaTramites();
	}

	private: System::Void btnTramiteEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->eliminarTramite(this->comboIDTramite->Text, this->comboIDClienteTramite->Text, this->ComboIDCLiTramite->Text, this->comboIDJuzgadoTramite->Text, this->comboRubroTramite->Text, this->comboTipoTramite->Text, this->fechaInicioTramite->Text, this->fechaFinTramite->Text);
		this->data->cerrarConexion();

		this->ConsultaTramites();
	}

};
}
