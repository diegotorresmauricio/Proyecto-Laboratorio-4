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
	/// Resumen de Juzgado
	/// </summary>
	public ref class Juzgado : public System::Windows::Forms::Form
	{
	public:
		Juzgado(void)
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
		~Juzgado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bdd^ data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridJuzgados;
	private: System::Windows::Forms::Button^ btnJuzgaEliminar;


	private: System::Windows::Forms::Button^ btnJuzgaEditar;

	private: System::Windows::Forms::Button^ btnJuzgaGuardar;
	private: System::Windows::Forms::ComboBox^ comboIDJurisdiccion;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->dataGridJuzgados = (gcnew System::Windows::Forms::DataGridView());
			this->btnJuzgaEliminar = (gcnew System::Windows::Forms::Button());
			this->btnJuzgaEditar = (gcnew System::Windows::Forms::Button());
			this->btnJuzgaGuardar = (gcnew System::Windows::Forms::Button());
			this->comboIDJurisdiccion = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridJuzgados))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Juzgados";
			// 
			// dataGridJuzgados
			// 
			this->dataGridJuzgados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridJuzgados->Location = System::Drawing::Point(16, 158);
			this->dataGridJuzgados->Name = L"dataGridJuzgados";
			this->dataGridJuzgados->Size = System::Drawing::Size(504, 203);
			this->dataGridJuzgados->TabIndex = 1;
			// 
			// btnJuzgaEliminar
			// 
			this->btnJuzgaEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnJuzgaEliminar->Location = System::Drawing::Point(441, 8);
			this->btnJuzgaEliminar->Name = L"btnJuzgaEliminar";
			this->btnJuzgaEliminar->Size = System::Drawing::Size(75, 23);
			this->btnJuzgaEliminar->TabIndex = 11;
			this->btnJuzgaEliminar->Text = L"Cancelar";
			this->btnJuzgaEliminar->UseVisualStyleBackColor = false;
			this->btnJuzgaEliminar->Click += gcnew System::EventHandler(this, &Juzgado::btnJuzgaEliminar_Click);
			// 
			// btnJuzgaEditar
			// 
			this->btnJuzgaEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnJuzgaEditar->Location = System::Drawing::Point(283, 8);
			this->btnJuzgaEditar->Name = L"btnJuzgaEditar";
			this->btnJuzgaEditar->Size = System::Drawing::Size(75, 23);
			this->btnJuzgaEditar->TabIndex = 10;
			this->btnJuzgaEditar->Text = L"Editar";
			this->btnJuzgaEditar->UseVisualStyleBackColor = false;
			this->btnJuzgaEditar->Click += gcnew System::EventHandler(this, &Juzgado::btnJuzgaEditar_Click);
			// 
			// btnJuzgaGuardar
			// 
			this->btnJuzgaGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnJuzgaGuardar->Location = System::Drawing::Point(132, 8);
			this->btnJuzgaGuardar->Name = L"btnJuzgaGuardar";
			this->btnJuzgaGuardar->Size = System::Drawing::Size(75, 23);
			this->btnJuzgaGuardar->TabIndex = 9;
			this->btnJuzgaGuardar->Text = L"Guardar";
			this->btnJuzgaGuardar->UseVisualStyleBackColor = false;
			this->btnJuzgaGuardar->Click += gcnew System::EventHandler(this, &Juzgado::btnJuzgaGuardar_Click);
			// 
			// comboIDJurisdiccion
			// 
			this->comboIDJurisdiccion->FormattingEnabled = true;
			this->comboIDJurisdiccion->Location = System::Drawing::Point(152, 83);
			this->comboIDJurisdiccion->Name = L"comboIDJurisdiccion";
			this->comboIDJurisdiccion->Size = System::Drawing::Size(121, 21);
			this->comboIDJurisdiccion->TabIndex = 12;
			this->comboIDJurisdiccion->SelectedIndexChanged += gcnew System::EventHandler(this, &Juzgado::comboIDJurisdiccion_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(149, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Jurisdicción";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(283, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(233, 20);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(257, 20);
			this->textBox2->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(280, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Pagina web(Turnos)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(283, 123);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(233, 20);
			this->textBox3->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(280, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Teléfono";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(16, 83);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 20;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Juzgado::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"ID Juzgado";
			// 
			// Juzgado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboIDJurisdiccion);
			this->Controls->Add(this->btnJuzgaEliminar);
			this->Controls->Add(this->btnJuzgaEditar);
			this->Controls->Add(this->btnJuzgaGuardar);
			this->Controls->Add(this->dataGridJuzgados);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Juzgado";
			this->Text = L"Juzgado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridJuzgados))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public: void ConsultaJuzgado() {
		this->data->abrirConexion();
		this->dataGridJuzgados->DataSource = this->data->getJuzgado();
		this->data->cerrarConexion();
	}

	private: System::Void Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ConsultaJuzgado();
	}
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDJuzgado();
		this->data->cerrarConexion();
	}

	private: System::Void comboIDJurisdiccion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDJurisdiccion();
		this->data->cerrarConexion();
	}

	private: System::Void btnJuzgaGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->insertarJuzgado(this->comboIDJurisdiccion->Text, this->textBox1->Text, this->textBox2->Text, this->textBox3->Text);
		this->data->cerrarConexion();

		this->textBox1->Clear();
		this->textBox2->Clear();
		this->textBox3->Clear();

		this->ConsultaJuzgado();
	}
	
	private: System::Void btnJuzgaEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->editarJuzgado(this->comboIDJurisdiccion->Text, this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->comboBox1->Text);
		this->data->cerrarConexion();

		this->textBox1->Clear();
		this->textBox2->Clear();
		this->textBox3->Clear();

		this->ConsultaJuzgado();
	}
	
	private: System::Void btnJuzgaEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->eliminarJuzgado(this->comboIDJurisdiccion->Text, this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->comboBox1->Text);
		this->data->cerrarConexion();

		this->textBox1->Clear();
		this->textBox2->Clear();
		this->textBox3->Clear();

		this->ConsultaJuzgado();
	}
};
}
