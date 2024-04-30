#pragma once
#include "TodoWindow.h"
#include "classLib.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class PetWindow : public System::Windows::Forms::Form
	{
	public:
		PetWindow(void)
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
		~PetWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ characterBox;
	private: System::Windows::Forms::Label^ messageBox;
	private: System::Windows::Forms::Label^ mainLabel;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->characterBox = (gcnew System::Windows::Forms::PictureBox());
			this->messageBox = (gcnew System::Windows::Forms::Label());
			this->mainLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->characterBox))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(0, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(624, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Перейти к списку задач";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PetWindow::button1_Click);
			// 
			// characterBox
			// 
			this->characterBox->Location = System::Drawing::Point(232, 83);
			this->characterBox->Name = L"characterBox";
			this->characterBox->Size = System::Drawing::Size(175, 175);
			this->characterBox->TabIndex = 1;
			this->characterBox->TabStop = false;
			// 
			// messageBox
			// 
			this->messageBox->AutoSize = true;
			this->messageBox->Font = (gcnew System::Drawing::Font(L"Montserrat", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->messageBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->messageBox->Location = System::Drawing::Point(7, 284);
			this->messageBox->Name = L"messageBox";
			this->messageBox->Size = System::Drawing::Size(64, 26);
			this->messageBox->TabIndex = 2;
			this->messageBox->Text = L"label1";
			// 
			// mainLabel
			// 
			this->mainLabel->AutoSize = true;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Montserrat Black", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->mainLabel->Location = System::Drawing::Point(226, 9);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(184, 48);
			this->mainLabel->TabIndex = 3;
			this->mainLabel->Text = L"Хвостик";
			// 
			// PetWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->mainLabel);
			this->Controls->Add(this->messageBox);
			this->Controls->Add(this->characterBox);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"PetWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Хвостик";
			this->Activated += gcnew System::EventHandler(this, &PetWindow::PetWindow_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->characterBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TodoWindow^ f2 = gcnew TodoWindow();
		f2->Show();
		this->Hide();
		f2->Owner = this;
	}

	private: System::Void PetWindow_Activated(System::Object^ sender, System::EventArgs^ e) {
		int goals = TXTD::GetRows();
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PetWindow::typeid));
		if (goals == 0) {
			this->characterBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"happy")));
			this->messageBox->Text = "Похоже, Вы тут впервые!\nЧтобы добавить и отслеживать свои задачи,\nнажмите на кнопку \"Перейти к списку задач\" ниже.";
		}
		else if (goals < 4) {
			this->characterBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"happy")));
			this->messageBox->Text = "У Вас " + goals + " незавершенных задач, так держать!";
		}
		else if (goals < 6) {
			this->characterBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"neutral")));
			this->messageBox->Text = "У Вас накопилось " + goals + " задач.\nСтарайтесь лучше!";
		}
		else {
			this->characterBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"angry")));
			this->messageBox->Text = "У Вас уже " + goals + " невыполненных задач.\nВам нужно начать выполнять их!";
		}
	};
	};
};