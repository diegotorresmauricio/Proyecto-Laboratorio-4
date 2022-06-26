#pragma once

namespace Laboratorio42 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Automotor
	/// </summary>
	public ref class Automotor : public System::Windows::Forms::Form
	{
	public:
		Automotor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Automotor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ fechaFinTramAuto;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ valorTramAuto;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ juzgadoTramAuto;

	private: System::Windows::Forms::ComboBox^ jurisdiccionTramAuto;

	private: System::Windows::Forms::Button^ btnTramAutoEliminar;

	private: System::Windows::Forms::Button^ btnTramAutoEditar;

	private: System::Windows::Forms::Button^ btnTramAutoGuardar;
	private: System::Windows::Forms::DataGridView^ vistaTramAuto;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ fechaInicioTramAuto;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ IDCliTramAuto;

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
			this->fechaFinTramAuto = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->valorTramAuto = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->juzgadoTramAuto = (gcnew System::Windows::Forms::ComboBox());
			this->jurisdiccionTramAuto = (gcnew System::Windows::Forms::ComboBox());
			this->btnTramAutoEliminar = (gcnew System::Windows::Forms::Button());
			this->btnTramAutoEditar = (gcnew System::Windows::Forms::Button());
			this->btnTramAutoGuardar = (gcnew System::Windows::Forms::Button());
			this->vistaTramAuto = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fechaInicioTramAuto = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IDCliTramAuto = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vistaTramAuto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tramites automotores";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(162, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Fecha finalización";
			// 
			// fechaFinTramAuto
			// 
			this->fechaFinTramAuto->Location = System::Drawing::Point(162, 149);
			this->fechaFinTramAuto->Name = L"fechaFinTramAuto";
			this->fechaFinTramAuto->Size = System::Drawing::Size(200, 20);
			this->fechaFinTramAuto->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Valor";
			// 
			// valorTramAuto
			// 
			this->valorTramAuto->Location = System::Drawing::Point(16, 149);
			this->valorTramAuto->Name = L"valorTramAuto";
			this->valorTramAuto->Size = System::Drawing::Size(121, 20);
			this->valorTramAuto->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(162, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Juzgado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Jurisdicción";
			// 
			// juzgadoTramAuto
			// 
			this->juzgadoTramAuto->FormattingEnabled = true;
			this->juzgadoTramAuto->Location = System::Drawing::Point(162, 101);
			this->juzgadoTramAuto->Name = L"juzgadoTramAuto";
			this->juzgadoTramAuto->Size = System::Drawing::Size(121, 21);
			this->juzgadoTramAuto->TabIndex = 27;
			// 
			// jurisdiccionTramAuto
			// 
			this->jurisdiccionTramAuto->FormattingEnabled = true;
			this->jurisdiccionTramAuto->Location = System::Drawing::Point(16, 101);
			this->jurisdiccionTramAuto->Name = L"jurisdiccionTramAuto";
			this->jurisdiccionTramAuto->Size = System::Drawing::Size(121, 21);
			this->jurisdiccionTramAuto->TabIndex = 26;
			// 
			// btnTramAutoEliminar
			// 
			this->btnTramAutoEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnTramAutoEliminar->Location = System::Drawing::Point(445, 6);
			this->btnTramAutoEliminar->Name = L"btnTramAutoEliminar";
			this->btnTramAutoEliminar->Size = System::Drawing::Size(75, 23);
			this->btnTramAutoEliminar->TabIndex = 25;
			this->btnTramAutoEliminar->Text = L"Eliminar";
			this->btnTramAutoEliminar->UseVisualStyleBackColor = false;
			// 
			// btnTramAutoEditar
			// 
			this->btnTramAutoEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnTramAutoEditar->Location = System::Drawing::Point(287, 6);
			this->btnTramAutoEditar->Name = L"btnTramAutoEditar";
			this->btnTramAutoEditar->Size = System::Drawing::Size(75, 23);
			this->btnTramAutoEditar->TabIndex = 24;
			this->btnTramAutoEditar->Text = L"Editar";
			this->btnTramAutoEditar->UseVisualStyleBackColor = false;
			// 
			// btnTramAutoGuardar
			// 
			this->btnTramAutoGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnTramAutoGuardar->Location = System::Drawing::Point(136, 6);
			this->btnTramAutoGuardar->Name = L"btnTramAutoGuardar";
			this->btnTramAutoGuardar->Size = System::Drawing::Size(75, 23);
			this->btnTramAutoGuardar->TabIndex = 23;
			this->btnTramAutoGuardar->Text = L"Guardar";
			this->btnTramAutoGuardar->UseVisualStyleBackColor = false;
			// 
			// vistaTramAuto
			// 
			this->vistaTramAuto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->vistaTramAuto->Location = System::Drawing::Point(16, 186);
			this->vistaTramAuto->Name = L"vistaTramAuto";
			this->vistaTramAuto->Size = System::Drawing::Size(504, 183);
			this->vistaTramAuto->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(162, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Fecha";
			// 
			// fechaInicioTramAuto
			// 
			this->fechaInicioTramAuto->Location = System::Drawing::Point(162, 57);
			this->fechaInicioTramAuto->Name = L"fechaInicioTramAuto";
			this->fechaInicioTramAuto->Size = System::Drawing::Size(200, 20);
			this->fechaInicioTramAuto->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Id Cliente";
			// 
			// IDCliTramAuto
			// 
			this->IDCliTramAuto->FormattingEnabled = true;
			this->IDCliTramAuto->Location = System::Drawing::Point(16, 57);
			this->IDCliTramAuto->Name = L"IDCliTramAuto";
			this->IDCliTramAuto->Size = System::Drawing::Size(121, 21);
			this->IDCliTramAuto->TabIndex = 18;
			// 
			// Automotor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->fechaFinTramAuto);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->valorTramAuto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->juzgadoTramAuto);
			this->Controls->Add(this->jurisdiccionTramAuto);
			this->Controls->Add(this->btnTramAutoEliminar);
			this->Controls->Add(this->btnTramAutoEditar);
			this->Controls->Add(this->btnTramAutoGuardar);
			this->Controls->Add(this->vistaTramAuto);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->fechaInicioTramAuto);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->IDCliTramAuto);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Automotor";
			this->Text = L"Automotor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vistaTramAuto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
