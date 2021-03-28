#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::TextBox^ result_area;
	private: System::Windows::Forms::Button^ drop_button;
	private: System::Windows::Forms::Button^ enter_button;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RadioButton^ poldel_radio;
	private: System::Windows::Forms::RadioButton^ hord_radio;
	private: System::Windows::Forms::MaskedTextBox^ b_area;
	private: System::Windows::Forms::MaskedTextBox^ a_area;
	private: System::Windows::Forms::MaskedTextBox^ eps_area;
	private: System::Windows::Forms::MaskedTextBox^ k_index;
	private: System::Windows::Forms::MaskedTextBox^ j_index;
	private: System::Windows::Forms::MaskedTextBox^ i_index;

	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->result_area = (gcnew System::Windows::Forms::TextBox());
			this->drop_button = (gcnew System::Windows::Forms::Button());
			this->enter_button = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->poldel_radio = (gcnew System::Windows::Forms::RadioButton());
			this->hord_radio = (gcnew System::Windows::Forms::RadioButton());
			this->i_index = (gcnew System::Windows::Forms::MaskedTextBox());
			this->j_index = (gcnew System::Windows::Forms::MaskedTextBox());
			this->k_index = (gcnew System::Windows::Forms::MaskedTextBox());
			this->eps_area = (gcnew System::Windows::Forms::MaskedTextBox());
			this->a_area = (gcnew System::Windows::Forms::MaskedTextBox());
			this->b_area = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->b_area);
			this->groupBox1->Controls->Add(this->a_area);
			this->groupBox1->Controls->Add(this->eps_area);
			this->groupBox1->Controls->Add(this->k_index);
			this->groupBox1->Controls->Add(this->j_index);
			this->groupBox1->Controls->Add(this->i_index);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(28, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(5);
			this->groupBox1->Size = System::Drawing::Size(350, 212);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(193, 164);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 20);
			this->label10->TabIndex = 15;
			this->label10->Text = L"]";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(118, 164);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 20);
			this->label9->TabIndex = 14;
			this->label9->Text = L";";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Δx = [";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Исследуемая область:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"ɛ =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Необходимая точность:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(9, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Коэффициенты уравнения:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(251, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"= 0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(160, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"x +";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x² +";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->result_area);
			this->groupBox2->Controls->Add(this->drop_button);
			this->groupBox2->Controls->Add(this->enter_button);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->poldel_radio);
			this->groupBox2->Controls->Add(this->hord_radio);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(406, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(5);
			this->groupBox2->Size = System::Drawing::Size(350, 212);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Решение:";
			// 
			// result_area
			// 
			this->result_area->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->result_area->Location = System::Drawing::Point(104, 117);
			this->result_area->Name = L"result_area";
			this->result_area->ReadOnly = true;
			this->result_area->Size = System::Drawing::Size(135, 26);
			this->result_area->TabIndex = 16;
			this->result_area->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// drop_button
			// 
			this->drop_button->Location = System::Drawing::Point(185, 161);
			this->drop_button->Margin = System::Windows::Forms::Padding(3, 3, 25, 3);
			this->drop_button->Name = L"drop_button";
			this->drop_button->Size = System::Drawing::Size(135, 42);
			this->drop_button->TabIndex = 17;
			this->drop_button->Text = L"Сброс";
			this->drop_button->UseVisualStyleBackColor = true;
			this->drop_button->Click += gcnew System::EventHandler(this, &MyForm::drop_button_Click);
			// 
			// enter_button
			// 
			this->enter_button->Location = System::Drawing::Point(30, 161);
			this->enter_button->Margin = System::Windows::Forms::Padding(25, 3, 3, 3);
			this->enter_button->Name = L"enter_button";
			this->enter_button->Size = System::Drawing::Size(135, 42);
			this->enter_button->TabIndex = 2;
			this->enter_button->Text = L"Решить";
			this->enter_button->UseVisualStyleBackColor = true;
			this->enter_button->Click += gcnew System::EventHandler(this, &MyForm::enter_button_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(8, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 16);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Метод решения:";
			// 
			// poldel_radio
			// 
			this->poldel_radio->AutoSize = true;
			this->poldel_radio->Location = System::Drawing::Point(11, 77);
			this->poldel_radio->Name = L"poldel_radio";
			this->poldel_radio->Size = System::Drawing::Size(248, 24);
			this->poldel_radio->TabIndex = 1;
			this->poldel_radio->TabStop = true;
			this->poldel_radio->Text = L"метод половинного деления";
			this->poldel_radio->UseVisualStyleBackColor = true;
			// 
			// hord_radio
			// 
			this->hord_radio->AutoSize = true;
			this->hord_radio->Location = System::Drawing::Point(11, 50);
			this->hord_radio->Name = L"hord_radio";
			this->hord_radio->Size = System::Drawing::Size(116, 24);
			this->hord_radio->TabIndex = 0;
			this->hord_radio->TabStop = true;
			this->hord_radio->Text = L"метод хорд";
			this->hord_radio->UseVisualStyleBackColor = true;
			// 
			// i_index
			// 
			this->i_index->InsertKeyMode = System::Windows::Forms::InsertKeyMode::Insert;
			this->i_index->Location = System::Drawing::Point(12, 47);
			this->i_index->Mask = L"#0000";
			this->i_index->Name = L"i_index";
			this->i_index->PromptChar = ' ';
			this->i_index->Size = System::Drawing::Size(48, 26);
			this->i_index->TabIndex = 16;
			this->i_index->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->i_index->ValidatingType = System::Int32::typeid;
			// 
			// j_index
			// 
			this->j_index->Location = System::Drawing::Point(104, 47);
			this->j_index->Mask = L"#0000";
			this->j_index->Name = L"j_index";
			this->j_index->PromptChar = ' ';
			this->j_index->Size = System::Drawing::Size(48, 26);
			this->j_index->TabIndex = 17;
			this->j_index->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// k_index
			// 
			this->k_index->Location = System::Drawing::Point(195, 47);
			this->k_index->Mask = L"#0000";
			this->k_index->Name = L"k_index";
			this->k_index->PromptChar = ' ';
			this->k_index->Size = System::Drawing::Size(48, 26);
			this->k_index->TabIndex = 18;
			this->k_index->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// eps_area
			// 
			this->eps_area->Location = System::Drawing::Point(44, 104);
			this->eps_area->Mask = L"0.000000";
			this->eps_area->Name = L"eps_area";
			this->eps_area->PromptChar = ' ';
			this->eps_area->Size = System::Drawing::Size(87, 26);
			this->eps_area->TabIndex = 19;
			this->eps_area->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// a_area
			// 
			this->a_area->Location = System::Drawing::Point(62, 161);
			this->a_area->Mask = L"#000";
			this->a_area->Name = L"a_area";
			this->a_area->PromptChar = ' ';
			this->a_area->Size = System::Drawing::Size(48, 26);
			this->a_area->TabIndex = 20;
			this->a_area->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// b_area
			// 
			this->b_area->Location = System::Drawing::Point(137, 161);
			this->b_area->Mask = L"#000";
			this->b_area->Name = L"b_area";
			this->b_area->PromptChar = ' ';
			this->b_area->Size = System::Drawing::Size(48, 26);
			this->b_area->TabIndex = 21;
			this->b_area->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 261);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximumSize = System::Drawing::Size(800, 300);
			this->MinimumSize = System::Drawing::Size(800, 300);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(25, 10, 25, 10);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение нелинейных уравнений";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void enter_button_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void drop_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
