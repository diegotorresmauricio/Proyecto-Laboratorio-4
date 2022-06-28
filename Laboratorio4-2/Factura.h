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
	/// Resumen de Factura
	/// </summary>
	public ref class Factura : public System::Windows::Forms::Form
	{
	public:
		Factura(void)
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
		~Factura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bdd^ data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridFactura;

	private: System::Windows::Forms::Button^ btnTramInmoEliminar;
	private: System::Windows::Forms::Button^ btnTramInmoEditar;
	private: System::Windows::Forms::Button^ btnTramInmoGuardar;
	private: System::Windows::Forms::ComboBox^ comboIDFactura;

	private: System::Windows::Forms::ComboBox^ comboCliFactura;
	private: System::Windows::Forms::ComboBox^ comboEmpleFactura;
	private: System::Windows::Forms::ComboBox^ comboTamiteFactura;
	private: System::Windows::Forms::DateTimePicker^ fechaFactura;
	private: System::Windows::Forms::TextBox^ txtValorFactura;






	private: System::Diagnostics::EventLog^ eventLog1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ ID;
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
			this->dataGridFactura = (gcnew System::Windows::Forms::DataGridView());
			this->btnTramInmoEliminar = (gcnew System::Windows::Forms::Button());
			this->btnTramInmoEditar = (gcnew System::Windows::Forms::Button());
			this->btnTramInmoGuardar = (gcnew System::Windows::Forms::Button());
			this->comboIDFactura = (gcnew System::Windows::Forms::ComboBox());
			this->comboCliFactura = (gcnew System::Windows::Forms::ComboBox());
			this->comboEmpleFactura = (gcnew System::Windows::Forms::ComboBox());
			this->comboTamiteFactura = (gcnew System::Windows::Forms::ComboBox());
			this->fechaFactura = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtValorFactura = (gcnew System::Windows::Forms::TextBox());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFactura))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Facturas";
			// 
			// dataGridFactura
			// 
			this->dataGridFactura->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridFactura->Location = System::Drawing::Point(13, 185);
			this->dataGridFactura->Name = L"dataGridFactura";
			this->dataGridFactura->Size = System::Drawing::Size(507, 177);
			this->dataGridFactura->TabIndex = 1;
			// 
			// btnTramInmoEliminar
			// 
			this->btnTramInmoEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnTramInmoEliminar->Location = System::Drawing::Point(445, 8);
			this->btnTramInmoEliminar->Name = L"btnTramInmoEliminar";
			this->btnTramInmoEliminar->Size = System::Drawing::Size(75, 23);
			this->btnTramInmoEliminar->TabIndex = 28;
			this->btnTramInmoEliminar->Text = L"Eliminar";
			this->btnTramInmoEliminar->UseVisualStyleBackColor = false;
			this->btnTramInmoEliminar->Click += gcnew System::EventHandler(this, &Factura::btnTramInmoEliminar_Click);
			// 
			// btnTramInmoEditar
			// 
			this->btnTramInmoEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnTramInmoEditar->Location = System::Drawing::Point(287, 8);
			this->btnTramInmoEditar->Name = L"btnTramInmoEditar";
			this->btnTramInmoEditar->Size = System::Drawing::Size(75, 23);
			this->btnTramInmoEditar->TabIndex = 27;
			this->btnTramInmoEditar->Text = L"Editar";
			this->btnTramInmoEditar->UseVisualStyleBackColor = false;
			this->btnTramInmoEditar->Click += gcnew System::EventHandler(this, &Factura::btnTramInmoEditar_Click);
			// 
			// btnTramInmoGuardar
			// 
			this->btnTramInmoGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnTramInmoGuardar->Location = System::Drawing::Point(136, 8);
			this->btnTramInmoGuardar->Name = L"btnTramInmoGuardar";
			this->btnTramInmoGuardar->Size = System::Drawing::Size(75, 23);
			this->btnTramInmoGuardar->TabIndex = 26;
			this->btnTramInmoGuardar->Text = L"Guardar";
			this->btnTramInmoGuardar->UseVisualStyleBackColor = false;
			this->btnTramInmoGuardar->Click += gcnew System::EventHandler(this, &Factura::btnTramInmoGuardar_Click);
			// 
			// comboIDFactura
			// 
			this->comboIDFactura->FormattingEnabled = true;
			this->comboIDFactura->Location = System::Drawing::Point(16, 66);
			this->comboIDFactura->Name = L"comboIDFactura";
			this->comboIDFactura->Size = System::Drawing::Size(121, 21);
			this->comboIDFactura->TabIndex = 29;
			this->comboIDFactura->SelectedIndexChanged += gcnew System::EventHandler(this, &Factura::comboIDFactura_SelectedIndexChanged);
			// 
			// comboCliFactura
			// 
			this->comboCliFactura->FormattingEnabled = true;
			this->comboCliFactura->Location = System::Drawing::Point(210, 66);
			this->comboCliFactura->Name = L"comboCliFactura";
			this->comboCliFactura->Size = System::Drawing::Size(121, 21);
			this->comboCliFactura->TabIndex = 30;
			this->comboCliFactura->SelectedIndexChanged += gcnew System::EventHandler(this, &Factura::comboCliFactura_SelectedIndexChanged);
			// 
			// comboEmpleFactura
			// 
			this->comboEmpleFactura->FormattingEnabled = true;
			this->comboEmpleFactura->Location = System::Drawing::Point(399, 66);
			this->comboEmpleFactura->Name = L"comboEmpleFactura";
			this->comboEmpleFactura->Size = System::Drawing::Size(121, 21);
			this->comboEmpleFactura->TabIndex = 31;
			this->comboEmpleFactura->SelectedIndexChanged += gcnew System::EventHandler(this, &Factura::comboEmpleFactura_SelectedIndexChanged);
			// 
			// comboTamiteFactura
			// 
			this->comboTamiteFactura->FormattingEnabled = true;
			this->comboTamiteFactura->Location = System::Drawing::Point(16, 111);
			this->comboTamiteFactura->Name = L"comboTamiteFactura";
			this->comboTamiteFactura->Size = System::Drawing::Size(121, 21);
			this->comboTamiteFactura->TabIndex = 32;
			this->comboTamiteFactura->SelectedIndexChanged += gcnew System::EventHandler(this, &Factura::comboTamiteFactura_SelectedIndexChanged);
			// 
			// fechaFactura
			// 
			this->fechaFactura->Location = System::Drawing::Point(210, 111);
			this->fechaFactura->Name = L"fechaFactura";
			this->fechaFactura->Size = System::Drawing::Size(310, 20);
			this->fechaFactura->TabIndex = 33;
			// 
			// txtValorFactura
			// 
			this->txtValorFactura->Location = System::Drawing::Point(16, 159);
			this->txtValorFactura->Name = L"txtValorFactura";
			this->txtValorFactura->Size = System::Drawing::Size(100, 20);
			this->txtValorFactura->TabIndex = 34;
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Location = System::Drawing::Point(16, 47);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(18, 13);
			this->ID->TabIndex = 35;
			this->ID->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(210, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Cliente";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(399, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Empleado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Tramite";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(210, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 13);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Fecha de emisión del comprobante";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 140);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Valor total";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(122, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Pesos Argentinos";
			// 
			// Factura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->txtValorFactura);
			this->Controls->Add(this->fechaFactura);
			this->Controls->Add(this->comboTamiteFactura);
			this->Controls->Add(this->comboEmpleFactura);
			this->Controls->Add(this->comboCliFactura);
			this->Controls->Add(this->comboIDFactura);
			this->Controls->Add(this->btnTramInmoEliminar);
			this->Controls->Add(this->btnTramInmoEditar);
			this->Controls->Add(this->btnTramInmoGuardar);
			this->Controls->Add(this->dataGridFactura);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Factura";
			this->Text = L"Factura";
			this->Load += gcnew System::EventHandler(this, &Factura::Factura_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFactura))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public: void ConsultaFact() {
		this->data->abrirConexion();
		this->dataGridFactura->DataSource = this->data->getFactura();
		this->data->cerrarConexion();
	}

	private: System::Void Factura_Load(System::Object^ sender, System::EventArgs^ e) {
	
		this->ConsultaFact();
	}

	private: System::Void btnTramInmoGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->insertarFactura(this->comboCliFactura->Text, this->comboEmpleFactura->Text, this->comboTamiteFactura->Text, this->fechaFactura->Text, this->txtValorFactura->Text);
		this->data->cerrarConexion();

		this->txtValorFactura->Clear();

		this->ConsultaFact();
	}

	private: System::Void btnTramInmoEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->editarFactura(this->comboCliFactura->Text, this->comboEmpleFactura->Text, this->comboTamiteFactura->Text, this->fechaFactura->Text, this->txtValorFactura->Text, this->comboIDFactura->Text);
		this->data->cerrarConexion();

		this->txtValorFactura->Clear();

		this->ConsultaFact();
	}

	private: System::Void btnTramInmoEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->eliminarFactura(this->comboCliFactura->Text, this->comboEmpleFactura->Text, this->comboTamiteFactura->Text, this->fechaFactura->Text, this->txtValorFactura->Text, this->comboIDFactura->Text);
		this->data->cerrarConexion();

		this->txtValorFactura->Clear();

		this->ConsultaFact();
	}

	private: System::Void comboCliFactura_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDCliente();
		this->data->cerrarConexion();	
	}

	private: System::Void comboEmpleFactura_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDEmpleado();
		this->data->cerrarConexion();
	}

	private: System::Void comboTamiteFactura_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDTramite();
		this->data->cerrarConexion();
	}
	private: System::Void comboIDFactura_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();
		this->data->getIDFactura();
		this->data->cerrarConexion();
	}

};
}
