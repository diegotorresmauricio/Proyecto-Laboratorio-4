#pragma once

namespace Laboratorio42 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Judicial
	/// </summary>
	public ref class Judicial : public System::Windows::Forms::Form
	{
	public:
		Judicial(void)
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
		~Judicial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ IDCliTramJudicial;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ fechaInicioTramJudicial;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ vistaTramJudicial;

	private: System::Windows::Forms::Button^ btnTramJudGuardar;
	private: System::Windows::Forms::Button^ btnTramJudEditar;
	private: System::Windows::Forms::Button^ btnTramJudEliminar;
	private: System::Windows::Forms::ComboBox^ jurisdiccionTramJudicial;
	private: System::Windows::Forms::ComboBox^ juzgadoTramJudicial;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ valorTramJudicial;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ fechaFinTramJudicial;

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
			this->IDCliTramJudicial = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fechaInicioTramJudicial = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->vistaTramJudicial = (gcnew System::Windows::Forms::DataGridView());
			this->btnTramJudGuardar = (gcnew System::Windows::Forms::Button());
			this->btnTramJudEditar = (gcnew System::Windows::Forms::Button());
			this->btnTramJudEliminar = (gcnew System::Windows::Forms::Button());
			this->jurisdiccionTramJudicial = (gcnew System::Windows::Forms::ComboBox());
			this->juzgadoTramJudicial = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->valorTramJudicial = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->fechaFinTramJudicial = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vistaTramJudicial))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tramites judiciales";
			// 
			// IDCliTramJudicial
			// 
			this->IDCliTramJudicial->FormattingEnabled = true;
			this->IDCliTramJudicial->Location = System::Drawing::Point(16, 59);
			this->IDCliTramJudicial->Name = L"IDCliTramJudicial";
			this->IDCliTramJudicial->Size = System::Drawing::Size(121, 21);
			this->IDCliTramJudicial->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Id Cliente";
			// 
			// fechaInicioTramJudicial
			// 
			this->fechaInicioTramJudicial->Location = System::Drawing::Point(162, 59);
			this->fechaInicioTramJudicial->Name = L"fechaInicioTramJudicial";
			this->fechaInicioTramJudicial->Size = System::Drawing::Size(200, 20);
			this->fechaInicioTramJudicial->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(162, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Fecha";
			// 
			// vistaTramJudicial
			// 
			this->vistaTramJudicial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->vistaTramJudicial->Location = System::Drawing::Point(16, 187);
			this->vistaTramJudicial->Name = L"vistaTramJudicial";
			this->vistaTramJudicial->Size = System::Drawing::Size(504, 184);
			this->vistaTramJudicial->TabIndex = 5;
			// 
			// btnTramJudGuardar
			// 
			this->btnTramJudGuardar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnTramJudGuardar->Location = System::Drawing::Point(136, 8);
			this->btnTramJudGuardar->Name = L"btnTramJudGuardar";
			this->btnTramJudGuardar->Size = System::Drawing::Size(75, 23);
			this->btnTramJudGuardar->TabIndex = 6;
			this->btnTramJudGuardar->Text = L"Guardar";
			this->btnTramJudGuardar->UseVisualStyleBackColor = false;
			// 
			// btnTramJudEditar
			// 
			this->btnTramJudEditar->BackColor = System::Drawing::Color::Khaki;
			this->btnTramJudEditar->Location = System::Drawing::Point(287, 8);
			this->btnTramJudEditar->Name = L"btnTramJudEditar";
			this->btnTramJudEditar->Size = System::Drawing::Size(75, 23);
			this->btnTramJudEditar->TabIndex = 7;
			this->btnTramJudEditar->Text = L"Editar";
			this->btnTramJudEditar->UseVisualStyleBackColor = false;
			// 
			// btnTramJudEliminar
			// 
			this->btnTramJudEliminar->BackColor = System::Drawing::Color::Tomato;
			this->btnTramJudEliminar->Location = System::Drawing::Point(445, 8);
			this->btnTramJudEliminar->Name = L"btnTramJudEliminar";
			this->btnTramJudEliminar->Size = System::Drawing::Size(75, 23);
			this->btnTramJudEliminar->TabIndex = 8;
			this->btnTramJudEliminar->Text = L"Eliminar";
			this->btnTramJudEliminar->UseVisualStyleBackColor = false;
			// 
			// jurisdiccionTramJudicial
			// 
			this->jurisdiccionTramJudicial->FormattingEnabled = true;
			this->jurisdiccionTramJudicial->Location = System::Drawing::Point(16, 103);
			this->jurisdiccionTramJudicial->Name = L"jurisdiccionTramJudicial";
			this->jurisdiccionTramJudicial->Size = System::Drawing::Size(121, 21);
			this->jurisdiccionTramJudicial->TabIndex = 9;
			// 
			// juzgadoTramJudicial
			// 
			this->juzgadoTramJudicial->FormattingEnabled = true;
			this->juzgadoTramJudicial->Location = System::Drawing::Point(162, 103);
			this->juzgadoTramJudicial->Name = L"juzgadoTramJudicial";
			this->juzgadoTramJudicial->Size = System::Drawing::Size(121, 21);
			this->juzgadoTramJudicial->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Jurisdicción";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(162, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Juzgado";
			// 
			// valorTramJudicial
			// 
			this->valorTramJudicial->Location = System::Drawing::Point(16, 151);
			this->valorTramJudicial->Name = L"valorTramJudicial";
			this->valorTramJudicial->Size = System::Drawing::Size(121, 20);
			this->valorTramJudicial->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Valor";
			// 
			// fechaFinTramJudicial
			// 
			this->fechaFinTramJudicial->Location = System::Drawing::Point(162, 151);
			this->fechaFinTramJudicial->Name = L"fechaFinTramJudicial";
			this->fechaFinTramJudicial->Size = System::Drawing::Size(200, 20);
			this->fechaFinTramJudicial->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(162, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Fecha finalización";
			// 
			// Judicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 374);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->fechaFinTramJudicial);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->valorTramJudicial);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->juzgadoTramJudicial);
			this->Controls->Add(this->jurisdiccionTramJudicial);
			this->Controls->Add(this->btnTramJudEliminar);
			this->Controls->Add(this->btnTramJudEditar);
			this->Controls->Add(this->btnTramJudGuardar);
			this->Controls->Add(this->vistaTramJudicial);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->fechaInicioTramJudicial);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->IDCliTramJudicial);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Judicial";
			this->Text = L"Judicial";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vistaTramJudicial))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
