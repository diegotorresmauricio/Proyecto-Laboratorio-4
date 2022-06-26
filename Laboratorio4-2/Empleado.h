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
	/// Resumen de Empleado
	/// </summary>
	public ref class Empleado : public System::Windows::Forms::Form
	{
	public:
		Empleado(void)
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
		~Empleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bdd^ data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNombreEmpleado;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridEmpleados;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtApellidoEmpleado;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtLegajoEmpleado;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtDNIEmpleado;

	private: System::Windows::Forms::ComboBox^ comboIDEmpleado;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombreEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridEmpleados = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtApellidoEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtLegajoEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtDNIEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->comboIDEmpleado = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEmpleados))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Empleados";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(167, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Nombre";
			// 
			// txtNombreEmpleado
			// 
			this->txtNombreEmpleado->Location = System::Drawing::Point(167, 67);
			this->txtNombreEmpleado->Name = L"txtNombreEmpleado";
			this->txtNombreEmpleado->Size = System::Drawing::Size(163, 20);
			this->txtNombreEmpleado->TabIndex = 35;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Tomato;
			this->button3->Location = System::Drawing::Point(445, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Empleado::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Khaki;
			this->button2->Location = System::Drawing::Point(287, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Empleado::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Location = System::Drawing::Point(136, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Empleado::button1_Click);
			// 
			// dataGridEmpleados
			// 
			this->dataGridEmpleados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEmpleados->Location = System::Drawing::Point(15, 134);
			this->dataGridEmpleados->Name = L"dataGridEmpleados";
			this->dataGridEmpleados->Size = System::Drawing::Size(504, 230);
			this->dataGridEmpleados->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(346, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Apellido";
			// 
			// txtApellidoEmpleado
			// 
			this->txtApellidoEmpleado->Location = System::Drawing::Point(349, 67);
			this->txtApellidoEmpleado->Name = L"txtApellidoEmpleado";
			this->txtApellidoEmpleado->Size = System::Drawing::Size(170, 20);
			this->txtApellidoEmpleado->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(346, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Legajo";
			// 
			// txtLegajoEmpleado
			// 
			this->txtLegajoEmpleado->Location = System::Drawing::Point(349, 108);
			this->txtLegajoEmpleado->Name = L"txtLegajoEmpleado";
			this->txtLegajoEmpleado->Size = System::Drawing::Size(170, 20);
			this->txtLegajoEmpleado->TabIndex = 41;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(167, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"DNI";
			// 
			// txtDNIEmpleado
			// 
			this->txtDNIEmpleado->Location = System::Drawing::Point(167, 108);
			this->txtDNIEmpleado->Name = L"txtDNIEmpleado";
			this->txtDNIEmpleado->Size = System::Drawing::Size(163, 20);
			this->txtDNIEmpleado->TabIndex = 39;
			// 
			// comboIDEmpleado
			// 
			this->comboIDEmpleado->FormattingEnabled = true;
			this->comboIDEmpleado->Location = System::Drawing::Point(16, 67);
			this->comboIDEmpleado->Name = L"comboIDEmpleado";
			this->comboIDEmpleado->Size = System::Drawing::Size(121, 21);
			this->comboIDEmpleado->TabIndex = 43;
			this->comboIDEmpleado->SelectedIndexChanged += gcnew System::EventHandler(this, &Empleado::comboIDEmpleado_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 44;
			this->label6->Text = L"ID";
			// 
			// Empleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboIDEmpleado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtLegajoEmpleado);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtDNIEmpleado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtApellidoEmpleado);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNombreEmpleado);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridEmpleados);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Empleado";
			this->Text = L"Empleado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEmpleados))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public: void ConsultaEmple() {
		this->data->abrirConexion();
		this->dataGridEmpleados->DataSource = this->data->getEmpleado();
		this->data->cerrarConexion();
	}

	private: System::Void Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ConsultaEmple();
	}

	private: System::Void comboIDEmpleado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDEmpleado();
		this->data->cerrarConexion();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->insertarEmpleado(this->txtNombreEmpleado->Text, this->txtApellidoEmpleado->Text, this->txtDNIEmpleado->Text, this->txtLegajoEmpleado->Text);
		this->data->cerrarConexion();

		this->txtNombreEmpleado->Clear();
		this->txtApellidoEmpleado->Clear();
		this->txtDNIEmpleado->Clear();
		this->txtLegajoEmpleado->Clear();

		this->ConsultaEmple();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->editarEmpleado(this->txtNombreEmpleado->Text, this->txtApellidoEmpleado->Text, this->txtDNIEmpleado->Text, this->txtLegajoEmpleado->Text, this->comboIDEmpleado->Text);
		this->data->cerrarConexion();

		this->txtNombreEmpleado->Clear();
		this->txtApellidoEmpleado->Clear();
		this->txtDNIEmpleado->Clear();
		this->txtLegajoEmpleado->Clear();

		this->ConsultaEmple();
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->eliminarEmpleado(this->txtNombreEmpleado->Text, this->txtApellidoEmpleado->Text, this->txtDNIEmpleado->Text, this->txtLegajoEmpleado->Text, this->comboIDEmpleado->Text);
		this->data->cerrarConexion();

		this->txtNombreEmpleado->Clear();
		this->txtApellidoEmpleado->Clear();
		this->txtDNIEmpleado->Clear();
		this->txtLegajoEmpleado->Clear();

		this->ConsultaEmple();
	}
};
}
