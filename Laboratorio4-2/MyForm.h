#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#include "Inmobiliario.h"
#include "Automotor.h"
#include "Judicial.h"
#include "Clientes.h"
#include "Juzgado.h"
#include "Registro.h"
#include "Factura.h"

namespace Laboratorio42 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelBotones;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelDerecho;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;


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
			this->panelBotones = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelDerecho = (gcnew System::Windows::Forms::Panel());
			this->panelBotones->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelBotones
			// 
			this->panelBotones->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panelBotones->Controls->Add(this->button8);
			this->panelBotones->Controls->Add(this->button7);
			this->panelBotones->Controls->Add(this->button6);
			this->panelBotones->Controls->Add(this->button5);
			this->panelBotones->Controls->Add(this->button4);
			this->panelBotones->Controls->Add(this->button3);
			this->panelBotones->Controls->Add(this->button2);
			this->panelBotones->Controls->Add(this->button1);
			this->panelBotones->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelBotones->Location = System::Drawing::Point(0, 0);
			this->panelBotones->Name = L"panelBotones";
			this->panelBotones->Size = System::Drawing::Size(205, 374);
			this->panelBotones->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(12, 295);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(181, 38);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Facturas";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Navy;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(12, 251);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(181, 38);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Registros";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Navy;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(12, 207);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(181, 38);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Juzgados";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Navy;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(12, 163);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(181, 38);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Clientes";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Tomato;
			this->button4->Location = System::Drawing::Point(12, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MidnightBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(12, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Judicial";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MidnightBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(12, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Automotor";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MidnightBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Inmobiliario";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panelDerecho
			// 
			this->panelDerecho->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDerecho->Location = System::Drawing::Point(205, 0);
			this->panelDerecho->Name = L"panelDerecho";
			this->panelDerecho->Size = System::Drawing::Size(532, 374);
			this->panelDerecho->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 374);
			this->Controls->Add(this->panelDerecho);
			this->Controls->Add(this->panelBotones);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panelBotones->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		template<class T>
		void AbrirPanel(T Formhijo) {
			if (this->panelDerecho->Controls->Count > 0)
				this->panelDerecho->Controls->Clear();
			Formhijo->TopLevel = false;
			Formhijo->Dock = DockStyle::Fill;
			this->panelDerecho->Controls->Add(Formhijo);
			this->panelDerecho->Tag = Formhijo;
			Formhijo->Show();
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Laboratorio42::Inmobiliario);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Laboratorio42::Automotor);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Laboratorio42::Judicial);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Laboratorio42::Clientes);
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Laboratorio42::Juzgado);
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Laboratorio42::Registro);
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Laboratorio42::Factura);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}

	
};
}
