#pragma once
#include "classLib.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class TodoWindow : public System::Windows::Forms::Form
	{
	public:
		TodoWindow(void)
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
		~TodoWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGrid;
	protected:






	private: System::Windows::Forms::Label^ todoHeader;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::Button^ editBtn;
	private: System::Windows::Forms::Button^ delBtn;



	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::TextBox^ nameText;
	private: System::Windows::Forms::TextBox^ descText;
	private: System::Windows::Forms::Label^ descLabel;



	private: System::Windows::Forms::Label^ dateLabel;


	private: System::Windows::Forms::DateTimePicker^ datePicker;



	private: System::Windows::Forms::Label^ infoLabel;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ descBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ statusBox;











































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->nameBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->statusBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->todoHeader = (gcnew System::Windows::Forms::Label());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->delBtn = (gcnew System::Windows::Forms::Button());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->descText = (gcnew System::Windows::Forms::TextBox());
			this->descLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToAddRows = false;
			this->dataGrid->AllowUserToDeleteRows = false;
			this->dataGrid->AllowUserToResizeColumns = false;
			this->dataGrid->AllowUserToResizeRows = false;
			this->dataGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.249999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nameBox, this->descBox,
					this->dateBox, this->statusBox
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.249999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGrid->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGrid->EnableHeadersVisualStyles = false;
			this->dataGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGrid->Location = System::Drawing::Point(0, 378);
			this->dataGrid->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGrid->MultiSelect = false;
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			this->dataGrid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGrid->RowHeadersVisible = false;
			this->dataGrid->RowHeadersWidth = 25;
			this->dataGrid->RowTemplate->Height = 25;
			this->dataGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGrid->Size = System::Drawing::Size(734, 283);
			this->dataGrid->TabIndex = 1;
			this->dataGrid->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TodoWindow::dataGrid_CellDoubleClick);
			// 
			// nameBox
			// 
			this->nameBox->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->nameBox->FillWeight = 120;
			this->nameBox->HeaderText = L"Заголовок цели";
			this->nameBox->MinimumWidth = 6;
			this->nameBox->Name = L"nameBox";
			this->nameBox->ReadOnly = true;
			// 
			// descBox
			// 
			this->descBox->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->descBox->FillWeight = 200;
			this->descBox->HeaderText = L"Описание цели";
			this->descBox->MinimumWidth = 6;
			this->descBox->Name = L"descBox";
			this->descBox->ReadOnly = true;
			// 
			// dateBox
			// 
			this->dateBox->HeaderText = L"Срок";
			this->dateBox->MinimumWidth = 6;
			this->dateBox->Name = L"dateBox";
			this->dateBox->ReadOnly = true;
			this->dateBox->Width = 150;
			// 
			// statusBox
			// 
			this->statusBox->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Red;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Red;
			this->statusBox->DefaultCellStyle = dataGridViewCellStyle2;
			this->statusBox->HeaderText = L"Статус выполнения";
			this->statusBox->MinimumWidth = 6;
			this->statusBox->Name = L"statusBox";
			this->statusBox->ReadOnly = true;
			// 
			// todoHeader
			// 
			this->todoHeader->AutoSize = true;
			this->todoHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->todoHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->todoHeader->Location = System::Drawing::Point(258, 15);
			this->todoHeader->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->todoHeader->Name = L"todoHeader";
			this->todoHeader->Size = System::Drawing::Size(269, 36);
			this->todoHeader->TabIndex = 2;
			this->todoHeader->Text = L"СПИСОК ЗАДАЧ";
			// 
			// addBtn
			// 
			this->addBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->addBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->addBtn->FlatAppearance->BorderSize = 0;
			this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->addBtn->Location = System::Drawing::Point(533, 138);
			this->addBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(155, 62);
			this->addBtn->TabIndex = 3;
			this->addBtn->Text = L"ДОБАВИТЬ";
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &TodoWindow::addBtn_Click);
			// 
			// editBtn
			// 
			this->editBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->editBtn->FlatAppearance->BorderSize = 0;
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->editBtn->Location = System::Drawing::Point(533, 209);
			this->editBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(155, 62);
			this->editBtn->TabIndex = 4;
			this->editBtn->Text = L"ИЗМЕНИТЬ";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &TodoWindow::editBtn_Click);
			// 
			// delBtn
			// 
			this->delBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->delBtn->FlatAppearance->BorderSize = 0;
			this->delBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->delBtn->Location = System::Drawing::Point(533, 279);
			this->delBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->delBtn->Name = L"delBtn";
			this->delBtn->Size = System::Drawing::Size(155, 62);
			this->delBtn->TabIndex = 5;
			this->delBtn->Text = L"УДАЛИТЬ";
			this->delBtn->UseVisualStyleBackColor = false;
			this->delBtn->Click += gcnew System::EventHandler(this, &TodoWindow::delBtn_Click);
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->nameLabel->Location = System::Drawing::Point(34, 179);
			this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(201, 25);
			this->nameLabel->TabIndex = 6;
			this->nameLabel->Text = L"Заголовок задачи:";
			// 
			// nameText
			// 
			this->nameText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nameText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameText->Location = System::Drawing::Point(227, 178);
			this->nameText->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(182, 30);
			this->nameText->TabIndex = 7;
			this->nameText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// descText
			// 
			this->descText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->descText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->descText->Location = System::Drawing::Point(227, 227);
			this->descText->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->descText->Name = L"descText";
			this->descText->Size = System::Drawing::Size(182, 30);
			this->descText->TabIndex = 9;
			this->descText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// descLabel
			// 
			this->descLabel->AutoSize = true;
			this->descLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->descLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->descLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->descLabel->Location = System::Drawing::Point(34, 228);
			this->descLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->descLabel->Name = L"descLabel";
			this->descLabel->Size = System::Drawing::Size(194, 25);
			this->descLabel->TabIndex = 8;
			this->descLabel->Text = L"Описание задачи:";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->dateLabel->Location = System::Drawing::Point(33, 277);
			this->dateLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(197, 25);
			this->dateLabel->TabIndex = 10;
			this->dateLabel->Text = L"Срок выполнения:";
			// 
			// datePicker
			// 
			this->datePicker->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->datePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->datePicker->Location = System::Drawing::Point(227, 275);
			this->datePicker->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->datePicker->Name = L"datePicker";
			this->datePicker->Size = System::Drawing::Size(182, 30);
			this->datePicker->TabIndex = 11;
			// 
			// infoLabel
			// 
			this->infoLabel->AutoSize = true;
			this->infoLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->infoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infoLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->infoLabel->Location = System::Drawing::Point(55, 1);
			this->infoLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->infoLabel->Name = L"infoLabel";
			this->infoLabel->Size = System::Drawing::Size(715, 68);
			this->infoLabel->TabIndex = 12;
			this->infoLabel->Text = L"Подсказка: для редактирования и удаления задачи нужно сначала выделить нужную зад"
				L"ачу \r\nнажатием левой кнопкой мыши.\r\nДля отметки выполнения задачи сделайте двойн"
				L"ое нажатие по нужной задаче.\r\n\r\n";
			this->infoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->infoLabel);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(0, 66);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(734, 312);
			this->panel1->TabIndex = 13;
			// 
			// TodoWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(734, 661);
			this->Controls->Add(this->datePicker);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->descText);
			this->Controls->Add(this->descLabel);
			this->Controls->Add(this->nameText);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->delBtn);
			this->Controls->Add(this->editBtn);
			this->Controls->Add(this->addBtn);
			this->Controls->Add(this->todoHeader);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"TodoWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Список задач";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TodoWindow::TodoWindow_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TodoWindow::MyForm1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TodoWindow::TodoWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Show();
		this->Hide();
	}
	private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (nameText->Text == "" || descText->Text == "" || datePicker->Text == "") {
			MessageBox::Show("Требуется заполнить все ячейки для добавления новой задачи.");
		}
		else {

			this->dataGrid->Rows->Add(nameText->Text, descText->Text, datePicker->Text, "Не выполнено!");

		}
	}
	private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (nameText->Text == "" || descText->Text == "" || datePicker->Text == "") {
			MessageBox::Show("Требуется заполнить все ячейки для редактирования задачи.");
		}
		else if (this->dataGrid->CurrentRow != nullptr) {
			this->dataGrid->CurrentRow->Cells["nameBox"]->Value = nameText->Text;
			this->dataGrid->CurrentRow->Cells["descBox"]->Value = descText->Text;
			this->dataGrid->CurrentRow->Cells["dateBox"]->Value = datePicker->Text;
		}
	}
	private: System::Void delBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGrid->CurrentRow != nullptr) {
			this->dataGrid->Rows->RemoveAt(this->dataGrid->CurrentRow->Index);
		}
	}
	private: System::Void statusBox_Checked(System::Object^ sender, System::EventArgs^ e) {
		this->dataGrid->Rows->RemoveAt(this->dataGrid->CurrentRow->Index);
	}
	private: System::Void TodoWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		try
		{
			TXTD::SaveData(this->dataGrid);
		}
		catch (const std::exception&)
		{
		}
	}
	private: System::Void TodoWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		TXTD::LoadData(this->dataGrid);
		for each (DataGridViewRow ^ row in dataGrid->Rows)
		{
			// Получение значения ячейки
			String^ cellValue = row->Cells["statusBox"]->Value->ToString();

			// Проверка значения
			if (cellValue == "Выполнено!")
			{
				// Изменение цвета текста ячейки
				row->Cells["statusBox"]->Style->ForeColor = Color::Green;
				row->Cells["statusBox"]->Style->SelectionForeColor = Color::Green;
			}
		}
	}
	private: System::Void dataGrid_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (this->dataGrid->CurrentRow->Index >= 0) {
			int row = this->dataGrid->CurrentRow->Index;
			if (this->dataGrid->Rows[row]->Cells["statusBox"]->Value == "Не выполнено!") {
				this->dataGrid->Rows[row]->Cells["statusBox"]->Value = "Выполнено!";
				this->dataGrid->Rows[row]->Cells["statusBox"]->Style->ForeColor = Color::Green;
				this->dataGrid->Rows[row]->Cells["statusBox"]->Style->SelectionForeColor = Color::Green;

			}
			else {
				this->dataGrid->Rows[row]->Cells["statusBox"]->Value = "Не выполнено!";
				this->dataGrid->Rows[row]->Cells["statusBox"]->Style->ForeColor = Color::Red;
				this->dataGrid->Rows[row]->Cells["statusBox"]->Style->SelectionForeColor = Color::Red;
			}
			
		}
	}
};
}
