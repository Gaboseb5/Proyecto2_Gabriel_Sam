#pragma once
#include "Doublelinkedlist.h";
#include "Node.h";
#include "Figura.h";
#include "Rectangulo.h";
namespace Proyecto2GabrielSam {

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
		Doublelinkedlist<Figura*>* myFigureList;
		MyForm(void)
		{
			InitializeComponent();
			myFigureList = new Doublelinkedlist<Figura*>();
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btncrear;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtpesomax;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblfila;
	private: System::Windows::Forms::TextBox^ txtcolumnas;

	private: System::Windows::Forms::TextBox^ txtfilas;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnalmacenar;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtnombre;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtfecha;

	private: System::Windows::Forms::TextBox^ txtcant;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtpesouni;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btnretirar;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtID;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtnombre2;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtfecha2;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtcantuni2;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ btneliminar;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtID2;
	private: System::Windows::Forms::Button^ btninventario;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btncrear = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtpesomax = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblfila = (gcnew System::Windows::Forms::Label());
			this->txtcolumnas = (gcnew System::Windows::Forms::TextBox());
			this->txtfilas = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->btnalmacenar = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtfecha = (gcnew System::Windows::Forms::TextBox());
			this->txtcant = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtpesouni = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnretirar = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtnombre2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtfecha2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtcantuni2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtID2 = (gcnew System::Windows::Forms::TextBox());
			this->btninventario = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(42, 368);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1156, 393);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btncrear);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtpesomax);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->lblfila);
			this->groupBox1->Controls->Add(this->txtcolumnas);
			this->groupBox1->Controls->Add(this->txtfilas);
			this->groupBox1->Location = System::Drawing::Point(42, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(271, 322);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Crear bahia";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// btncrear
			// 
			this->btncrear->Location = System::Drawing::Point(9, 277);
			this->btncrear->Name = L"btncrear";
			this->btncrear->Size = System::Drawing::Size(256, 26);
			this->btncrear->TabIndex = 18;
			this->btncrear->Text = L"Crear";
			this->btncrear->UseVisualStyleBackColor = true;
			this->btncrear->Click += gcnew System::EventHandler(this, &MyForm::btncrear_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Peso max";
			// 
			// txtpesomax
			// 
			this->txtpesomax->Location = System::Drawing::Point(129, 172);
			this->txtpesomax->Name = L"txtpesomax";
			this->txtpesomax->Size = System::Drawing::Size(121, 22);
			this->txtpesomax->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Tipo de producto";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Material para oficina", L"Ropa", L"Material de construcción" });
			this->comboBox1->Location = System::Drawing::Point(129, 125);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Columna";
			// 
			// lblfila
			// 
			this->lblfila->AutoSize = true;
			this->lblfila->Location = System::Drawing::Point(6, 44);
			this->lblfila->Name = L"lblfila";
			this->lblfila->Size = System::Drawing::Size(30, 17);
			this->lblfila->TabIndex = 12;
			this->lblfila->Text = L"Fila";
			// 
			// txtcolumnas
			// 
			this->txtcolumnas->Location = System::Drawing::Point(129, 81);
			this->txtcolumnas->Name = L"txtcolumnas";
			this->txtcolumnas->Size = System::Drawing::Size(121, 22);
			this->txtcolumnas->TabIndex = 11;
			// 
			// txtfilas
			// 
			this->txtfilas->Location = System::Drawing::Point(129, 44);
			this->txtfilas->Name = L"txtfilas";
			this->txtfilas->Size = System::Drawing::Size(121, 22);
			this->txtfilas->TabIndex = 10;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->btnalmacenar);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->txtnombre);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->txtfecha);
			this->groupBox2->Controls->Add(this->txtcant);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txtpesouni);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(377, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(280, 322);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Almacenar producto";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Material para oficina", L"Ropa", L"Material de construcción" });
			this->comboBox3->Location = System::Drawing::Point(146, 47);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 24);
			this->comboBox3->TabIndex = 22;
			// 
			// btnalmacenar
			// 
			this->btnalmacenar->Location = System::Drawing::Point(26, 277);
			this->btnalmacenar->Name = L"btnalmacenar";
			this->btnalmacenar->Size = System::Drawing::Size(232, 27);
			this->btnalmacenar->TabIndex = 21;
			this->btnalmacenar->Text = L"Almacenar";
			this->btnalmacenar->UseVisualStyleBackColor = true;
			this->btnalmacenar->Click += gcnew System::EventHandler(this, &MyForm::btnalmacenar_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Nombre del resp.";
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(146, 217);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(100, 22);
			this->txtnombre->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 172);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Fecha";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Cant. unidades";
			// 
			// txtfecha
			// 
			this->txtfecha->Location = System::Drawing::Point(146, 172);
			this->txtfecha->Name = L"txtfecha";
			this->txtfecha->Size = System::Drawing::Size(100, 22);
			this->txtfecha->TabIndex = 15;
			// 
			// txtcant
			// 
			this->txtcant->Location = System::Drawing::Point(146, 128);
			this->txtcant->Name = L"txtcant";
			this->txtcant->Size = System::Drawing::Size(100, 22);
			this->txtcant->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Peso unitario";
			// 
			// txtpesouni
			// 
			this->txtpesouni->Location = System::Drawing::Point(146, 86);
			this->txtpesouni->Name = L"txtpesouni";
			this->txtpesouni->Size = System::Drawing::Size(100, 22);
			this->txtpesouni->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Tipo de producto";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnretirar);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->txtID);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->txtnombre2);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->txtfecha2);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->txtcantuni2);
			this->groupBox3->Location = System::Drawing::Point(729, 26);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(279, 322);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Retirar producto";
			// 
			// btnretirar
			// 
			this->btnretirar->Location = System::Drawing::Point(15, 277);
			this->btnretirar->Name = L"btnretirar";
			this->btnretirar->Size = System::Drawing::Size(249, 27);
			this->btnretirar->TabIndex = 26;
			this->btnretirar->Text = L"Retirar";
			this->btnretirar->UseVisualStyleBackColor = true;
			this->btnretirar->Click += gcnew System::EventHandler(this, &MyForm::btnretirar_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 233);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 17);
			this->label13->TabIndex = 25;
			this->label13->Text = L"ID";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(143, 230);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(121, 22);
			this->txtID->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 189);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(117, 17);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Nombre del resp.";
			// 
			// txtnombre2
			// 
			this->txtnombre2->Location = System::Drawing::Point(143, 186);
			this->txtnombre2->Name = L"txtnombre2";
			this->txtnombre2->Size = System::Drawing::Size(121, 22);
			this->txtnombre2->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 141);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 17);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Fecha";
			// 
			// txtfecha2
			// 
			this->txtfecha2->Location = System::Drawing::Point(143, 138);
			this->txtfecha2->Name = L"txtfecha2";
			this->txtfecha2->Size = System::Drawing::Size(121, 22);
			this->txtfecha2->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 17);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Cant. unidades";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Material para oficina", L"Ropa", L"Material de construcción" });
			this->comboBox2->Location = System::Drawing::Point(143, 41);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Tipo de producto";
			// 
			// txtcantuni2
			// 
			this->txtcantuni2->Location = System::Drawing::Point(143, 88);
			this->txtcantuni2->Name = L"txtcantuni2";
			this->txtcantuni2->Size = System::Drawing::Size(121, 22);
			this->txtcantuni2->TabIndex = 15;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btneliminar);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->txtID2);
			this->groupBox4->Location = System::Drawing::Point(1072, 26);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(219, 160);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Eliminar bahia";
			// 
			// btneliminar
			// 
			this->btneliminar->Location = System::Drawing::Point(13, 115);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(172, 27);
			this->btneliminar->TabIndex = 28;
			this->btneliminar->Text = L"Eliminar";
			this->btneliminar->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 47);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 17);
			this->label14->TabIndex = 27;
			this->label14->Text = L"ID";
			// 
			// txtID2
			// 
			this->txtID2->Location = System::Drawing::Point(64, 41);
			this->txtID2->Name = L"txtID2";
			this->txtID2->Size = System::Drawing::Size(121, 22);
			this->txtID2->TabIndex = 26;
			// 
			// btninventario
			// 
			this->btninventario->Location = System::Drawing::Point(1301, 287);
			this->btninventario->Name = L"btninventario";
			this->btninventario->Size = System::Drawing::Size(219, 43);
			this->btninventario->TabIndex = 27;
			this->btninventario->Text = L"Generar inventario";
			this->btninventario->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(1285, 368);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(255, 393);
			this->richTextBox1->TabIndex = 28;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1567, 807);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->btninventario);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Bodega Grid";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	
		   



		   void DrawNode(Graphics^ canvas, int posx, int posy, int type,double height, double width,int ID,int cant,int pesomax,int pesoutil) {
			   Brush^ brush1 = gcnew SolidBrush(Color::Gray);
			   Brush^ brushstring = gcnew SolidBrush(Color::Black);
			   System::Drawing::Pen^ pen;
			   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 8, FontStyle::Bold);
			   
			   
			   switch (type)
			   {
			   case 1: {
				   
				   canvas->FillRectangle(brush1, RectangleF(posx , posy, width * 5, height * 5));
			   }break;
			   default:
				   break;
			   }
			   
			   
			   
				   canvas->DrawString("Material: " + ID + "\nUnidades:(Tipo: " + ID + ", Uni " + cant + "\nPeso Max: " 
					   +pesomax + "\nPeso utilizado: " + (pesoutil * cant), fuente, brushstring, posx + 5, posy + 5);

				   
				   ID = 0;
				   cant = 0;
				   pesoutil = 0;
				   pesomax = 0;

			   
		   }

		   void DrawNode2(Graphics^ canvas, int posx, int posy, int type, double height, double width, int valor) {
			   Brush^ brush1 = gcnew SolidBrush(Color::Green);
			   Brush^ brushstring = gcnew SolidBrush(Color::White);
			   System::Drawing::Pen^ pen;
			   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 8, FontStyle::Bold);


			   switch (type)
			   {
			   case 1: {
				   canvas->FillRectangle(brush1, RectangleF(posx, posy, width * 5, height * 5));
			   }break;
			   default:
				   break;
			   }

			   if (valor == 1) {
				   canvas->DrawString("A", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 2) {
				   canvas->DrawString("B", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 3) {
				   canvas->DrawString("C", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 4) {
				   canvas->DrawString("D", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 5) {
				   canvas->DrawString("E", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 6) {
				   canvas->DrawString("F", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 7) {
				   canvas->DrawString("G", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 8) {
				   canvas->DrawString("H", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 9) {
				   canvas->DrawString("I", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 10) {
				   canvas->DrawString("J", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 11) {
				   canvas->DrawString("K", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 12) {
				   canvas->DrawString("L", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 13) {
				   canvas->DrawString("M", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 14) {
				   canvas->DrawString("N", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 15) {
				   canvas->DrawString("Ñ", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 16) {
				   canvas->DrawString("O", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 17) {
				   canvas->DrawString("P", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 18) {
				   canvas->DrawString("Q", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 19) {
				   canvas->DrawString("R", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 20) {
				   canvas->DrawString("S", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 21) {
				   canvas->DrawString("T", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 22) {
				   canvas->DrawString("U", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 23) {
				   canvas->DrawString("V", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 24) {
				   canvas->DrawString("W", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 25) {
				   canvas->DrawString("X", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 26) {
				   canvas->DrawString("Y", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 27) {
				   canvas->DrawString("Z", fuente, brushstring, posx + 10, posy + 5);
			   }
			   
		   }

		   void DrawNode3(Graphics^ canvas, int posx, int posy, int type, double height, double width, int valor) {
			   Brush^ brush1 = gcnew SolidBrush(Color::Green);
			   Brush^ brushstring = gcnew SolidBrush(Color::White);
			   System::Drawing::Pen^ pen;
			   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 8, FontStyle::Bold);


			   switch (type)
			   {
			   case 1: {
				   canvas->FillRectangle(brush1, RectangleF(posx, posy, width * 5, height * 5));
			   }break;
			   default:
				   break;
			   }

			   if (valor == 1) {
				   canvas->DrawString("1", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 2) {
				   canvas->DrawString("2", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 3) {
				   canvas->DrawString("3", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 4) {
				   canvas->DrawString("4", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 5) {
				   canvas->DrawString("5", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 6) {
				   canvas->DrawString("6", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 7) {
				   canvas->DrawString("7", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 8) {
				   canvas->DrawString("8", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 9) {
				   canvas->DrawString("9", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 10) {
				   canvas->DrawString("10", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 11) {
				   canvas->DrawString("11", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 12) {
				   canvas->DrawString("12", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 13) {
				   canvas->DrawString("13", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 14) {
				   canvas->DrawString("14", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 15) {
				   canvas->DrawString("15", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 16) {
				   canvas->DrawString("16", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 17) {
				   canvas->DrawString("17", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 18) {
				   canvas->DrawString("18", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 19) {
				   canvas->DrawString("19", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 20) {
				   canvas->DrawString("20", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 21) {
				   canvas->DrawString("21", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 22) {
				   canvas->DrawString("22", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 23) {
				   canvas->DrawString("23", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 24) {
				   canvas->DrawString("24", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 25) {
				   canvas->DrawString("25", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 26) {
				   canvas->DrawString("26", fuente, brushstring, posx + 10, posy + 5);
			   }
			   else if (valor == 27) {
				   canvas->DrawString("27", fuente, brushstring, posx + 10, posy + 5);
			   }

		   }

		   void Crearbahias(int ID, int cant, int pesomax, int pesoutil) {
			   
			   
			   int val;
			   int num;
			   Figura* newRectangle = new Rectangulo();
			   newRectangle->height = 5;
			   newRectangle->width = 10;
			   newRectangle->type = 1;
			   int posx, posy;
			   myFigureList->InsertAtEnd(newRectangle);
			   //myFigureList->InsertAtPosition(newRectangle,Convert::ToInt32(txtcolumnas->Text));

			   if (txtfilas->Text == Convert::ToString("A")) {

				   posx = 0;
				   posy = 30;
				   val = 1;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);

				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
				   }
				   else
				   {
					   posx = 0;
					   posy = 0;
				   }


			   }
			   else if (txtfilas->Text == Convert::ToString("B")) {
				   posx = 0;
				   posy = 60;
				   val = 2;

				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					  
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					  
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					  
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					  
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
				
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
	
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 60;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 60;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 60;
				   }

			   }
			   else if (txtfilas->Text == Convert::ToString("C")) {
				   posx = 0;
				   posy = 30 * 3;
				   val = 3;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 3;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 3;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 3;
				   }

			   }
			   else if (txtfilas->Text == Convert::ToString("D")) {
				   posx = 0;
				   posy = 30 * 4;
				   val = 4;
				   num = 4;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 4;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 4;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 4;
				   }

			   }
			   else if (txtfilas->Text == Convert::ToString("E")) {
				   posx = 0;
				   posy = 30 * 5;
				   val = 5;
				   num = 5;
				   DrawNode2(panel1->CreateGraphics(), posx, 0, 1, 5, 10, val);


				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 5;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 5;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 5;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("F")) {
				   posx = 0;
				   posy = 30 * 6;
				   val = 6;
				   num = 6;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 6;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 6;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 6;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("G")) {
				   posx = 0;
				   posy = 30 * 7;
				   val = 7;
				   num = 7;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 7;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 7;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 7;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("H")) {
				   posx = 0;
				   posy = 30 * 8;
				   val = 8;
				   num = 8;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 8;

					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 8;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 8;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 8;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("I")) {
				   posx = 0;
				   posy = 30 * 9;
				   val = 9;
				   num = 9;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 9;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 9;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 9;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("J")) {
				   posx = 0;
				   posy = 30 * 10;
				   val = 10;
				   num = 10;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 10;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 10;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 10;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("K")) {
				   posx = 0;
				   posy = 30 * 11;
				   val = 11;
				   num = 11;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 11;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 11;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 11;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("L")) {
				   posx = 0;
				   posy = 30 * 12;
				   val = 12;
				   num = 12;
				   DrawNode2(panel1->CreateGraphics(), posx, 0, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0,1, 5, 10, 14);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 12;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 12;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 12;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("M")) {
				   posx = 0;
				   posy = 30 * 13;
				   val = 13;
				   num = 13;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);

					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 13;
				   }

				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 13;

				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 13;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 13;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 13;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("N")) {
				   posx = 0;
				   posy = 30 * 14;
				   val = 14;
				   num = 14;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 14;
					   
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 14;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 14;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 14;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("Ñ")) {
				   posx = 0;
				   posy = 30 * 15;
				   val = 15;
				   num = 15;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 15;
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 15;

					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 15;
				   }

				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 15;
				   }

				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 15;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 15;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 15;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("O")) {
				   posx = 0;
				   posy = 30 * 16;
				   val = 16;
				   num = 16;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					     posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
						   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, posy, 1, 5, 10, 22);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 16;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 16;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 16;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("P")) {
				   posx = 0;
				   posy = 30 * 17;
				   val = 17;
				   num = 17;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 17;
				   }

				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), 0, 0, 1, 5, 10, 8);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 17;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 17;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 17;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("Q")) {
				   posx = 0;
				   posy = 30 * 18;
				   val = 18;
				   num = 18;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);

					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 18;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 18;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("R")) {
				   posx = 0;
				   posy = 30 * 19;
				   val = 19;
				   num = 19;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 19;

					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 18;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 19;

					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 19;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 19;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 19;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("S")) {
				   posx = 0;
				   posy = 30 * 20;
				   val = 20;
				   num = 20;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 20;

					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 0) {
					   posx = 55 * 9;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, posy, 1, 5, 10, 11);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 20;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 20;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 20;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("T")) {
				   posx = 0;
				   posy = 30 * 21;
				   val = 21;
				   num = 21;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 21;
				   }

				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 21;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 21;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 21;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("U")) {
				   posx = 0;
				   posy = 30 * 22;
				   val = 22;
				   num = 22;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 22;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 22;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 22;

					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 22;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("V")) {
				   posx = 0;
				   posy = 30 * 23;
				   val = 23;
				   num = 23;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 23;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 23;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 23;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("W")) {
				   posx = 0;
				   posy = 30 * 24;
				   val = 24;
				   num = 24;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx,  0, 1, 5, 10, 1);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 24;



				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 24;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 24;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 24;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("X")) {
				   posx = 0;
				   posy = 30 * 25;
				   val = 25;
				   num = 25;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 25;
				   }

				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 25;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 25;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 25;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("Y")) {
				   posx = 0;
				   posy = 30 * 26;
				   val = 26;
				   num = 26;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 26;

				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 0) {
					   posx = 55 * 19;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 25) {
					   posx = 55 * 25;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 26;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 26;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 26;
				   }
			   }
			   else if (txtfilas->Text == Convert::ToString("Z")) {
				   posx = 0;
				   posy = 30 * 27;
				   val = 27;
				   num = 27;
				   DrawNode2(panel1->CreateGraphics(), posx, posy, 1, 5, 10, val);

				   if (Convert::ToInt32(txtcolumnas->Text) == 1) {
					   posx = 55;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 1);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 2) {
					   posx = 55 * 2;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 2);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 3) {
					   posx = 55 * 3;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 3);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 4) {
					   posx = 55 * 4;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 4);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 5) {
					   posx = 55 * 5;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 5);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 6) {
					   posx = 55 * 6;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 6);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 7) {
					   posx = 55 * 7;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 7);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 8) {
					   posx = 55 * 8;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 8);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 9) {
					   posx = 55 * 9;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 9);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 10) {
					   posx = 55 * 10;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 10);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 11) {
					   posx = 55 * 11;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 11);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 12) {
					   posx = 55 * 12;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 12);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 13) {
					   posx = 55 * 13;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 13);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 14) {
					   posx = 55 * 14;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 14);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 15) {
					   posx = 55 * 15;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 15);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 16) {
					   posx = 55 * 16;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 16);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 17) {
					   posx = 55 * 17;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 17);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 18) {
					   posx = 55 * 18;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 18);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 19) {
					   posx = 55 * 19;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 19);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 20) {
					   posx = 55 * 20;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 20);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 21) {
					   posx = 55 * 21;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 21);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 22) {
					   posx = 55 * 22;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 22);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 23) {
					   posx = 55 * 23;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 23);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 24) {
					   posx = 55 * 24;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 24);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 0) {
					   posx = 55 * 25;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 25);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 26) {
					   posx = 55 * 26;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 26);
					   posy = 30 * 27;
				   }
				   else if (Convert::ToInt32(txtcolumnas->Text) == 27) {
					   posx = 55 * 27;
					   posy = 30 * 27;
					   DrawNode3(panel1->CreateGraphics(), posx, 0, 1, 5, 10, 27);
					   posy = 30 * 27;
				   }
			   }
			   //int pesomax;
			   //int cantutil;
			   //pesomax = Convert::ToInt32(txtpesomax->Text);
			   //switch (comboBox1->SelectedIndex)
			   //{
			   //case 0:
				  // ID = 1;
				  // break;
			   //case 1:
				  // ID = 2;
				  // break;
			   //case 2:
				  // ID = 3;
				  // break;
			   //default:
				  // break;
			   //}
			   ///*if (!myFigureList->IsEmpty()) {
				  // Node<Figura*>* temp = myFigureList->start;

				  // for (int i = 0; i < myFigureList->count; i++) {
					 //  Figura* actual = temp->value;


					 //  DrawNode(panel1->CreateGraphics(), i * posx, posy, actual->type,actual->height, actual->width);
					 //  temp = temp->next;
				  // }

			   //}*/

			   //int cant = 0;


			   int ID1;
			   int ID2;

			   switch (comboBox1->SelectedIndex)
			   {
			   case 0:
				   ID1 = 1;
				   break;
			   case 1:
				   ID1 = 2;
				   break;
			   case 2:
				   ID1 = 3;
				   break;
			   default:
				   break;
			   }

			   switch (comboBox3->SelectedIndex)
			   {
			   case 0:
				   ID2 = 1;
				   break;
			   case 1:
				   ID2 = 2;
				   break;
			   case 2:
				   ID2 = 3;
				   break;
			   default:
				   break;
			   }

			   
			   DrawNode(panel1->CreateGraphics(), posx, posy, 1, 5, 10, ID, cant,pesomax,pesoutil);
		   }
		   
private: System::Void btncrear_Click(System::Object^ sender, System::EventArgs^ e) {
	

	int ID;
	int pesoutil;
	int cant;

	pesoutil = 0;
	cant = 0;
	switch (comboBox1->SelectedIndex)
	{
	case 1:
		ID = 1;
		break;
	case 2:
		ID = 2;
		break;
	case 3:
		ID = 3;
		break;
	default:
		break;
	}

	richTextBox1->Text = richTextBox1->Text + "\n\nMaterial: " + ID + "\nUnidades : (Tipo: " + ID + ", Uni " + cant +")"+ "\nPeso Max : "
		+ "\nPeso utilizado: " + pesoutil;
	Crearbahias(ID,cant,2,pesoutil);
	
}
private: System::Void btnalmacenar_Click(System::Object^ sender, System::EventArgs^ e) {

	int ID, pesouni;
	pesouni = Convert::ToInt32(txtpesouni->Text);
	int cantuni = Convert::ToInt32(txtcant->Text);
	DateTime fecha = Convert::ToDateTime(txtfecha->Text);
	String^nombre = txtnombre->Text;
	int pesomax = Convert::ToInt32(txtpesomax->Text);
	switch (comboBox3->SelectedIndex)
	{
	case 1:
		ID = 1;
		break;
	case 2:
		ID = 2;
		break;
	case 3:
		ID = 3;
		break;
	default:
		break;
	}
	
	richTextBox1->Text = richTextBox1->Text + "\n\nMaterial: " + ID + "\nUnidades : (Tipo: " + ID + ", Uni " + cantuni + ")"+"\nPeso Max : " 
		+ pesomax + "\nPeso utilizado: " + (pesouni * cantuni) + "\nFecha: " + fecha + "\nNombre del encargado: " + nombre;

	Crearbahias(ID,cantuni,pesomax,pesouni);
	
}
private: System::Void btnretirar_Click(System::Object^ sender, System::EventArgs^ e) {
	int pesomax = Convert::ToInt32(txtpesomax->Text);
	int ID;
	int cantuni = Convert::ToInt32(txtcantuni2->Text);
	DateTime fecha = Convert::ToDateTime(txtfecha2->Text);
	int pesouni = Convert::ToInt32(txtpesouni->Text);
	String^ nombre = txtnombre2->Text;

	richTextBox1->Text = richTextBox1->Text + "\n\nMaterial: " + ID + "\nUnidades : (Tipo: " + ID + ", Uni " + cantuni + ")" + "\nPeso Max : "
		+ pesomax + "\nPeso utilizado: " + (pesouni - cantuni) + "\nFecha: " + fecha + "\nNombre del encargado: " + nombre;

	switch (comboBox2->SelectedIndex)
	{
	case 1:
		ID = 1;
		break;
	case 2:
		ID = 2;
		break;
	case 3:
		ID = 3;
		break;
	default:
		break;
	}

	Crearbahias(ID, cantuni, pesomax, pesouni);
}
};
}
