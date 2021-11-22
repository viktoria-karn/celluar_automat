#pragma once
#include "celluar_automat_grafic.h"
#include "About.h"
namespace celluarautomat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main_menu
	/// </summary>
	public ref class Main_menu : public System::Windows::Forms::Form
	{
	public:
		Main_menu(void)
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
		~Main_menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  go_automat;
	private: System::Windows::Forms::Button^  about;
	private: System::Windows::Forms::Label^  label1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_menu::typeid));
			this->go_automat = (gcnew System::Windows::Forms::Button());
			this->about = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// go_automat
			// 
			this->go_automat->BackColor = System::Drawing::SystemColors::ControlDark;
			this->go_automat->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->go_automat->ForeColor = System::Drawing::Color::Black;
			this->go_automat->Location = System::Drawing::Point(137, 67);
			this->go_automat->Name = L"go_automat";
			this->go_automat->Size = System::Drawing::Size(158, 100);
			this->go_automat->TabIndex = 0;
			this->go_automat->Text = L"Генерация псевдослучайных чисел и шифрование";
			this->go_automat->UseVisualStyleBackColor = false;
			this->go_automat->Click += gcnew System::EventHandler(this, &Main_menu::go_automat_Click);
			// 
			// about
			// 
			this->about->BackColor = System::Drawing::Color::LightGray;
			this->about->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->about->Location = System::Drawing::Point(137, 217);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(158, 80);
			this->about->TabIndex = 1;
			this->about->Text = L"О программе";
			this->about->UseVisualStyleBackColor = false;
			this->about->Click += gcnew System::EventHandler(this, &Main_menu::about_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 46);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Cellar";
			// 
			// Main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(438, 368);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->about);
			this->Controls->Add(this->go_automat);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main_menu";
			this->Text = L"Cellar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void go_automat_Click(System::Object^  sender, System::EventArgs^  e) {
		celluar_automat_grafic^ Celluar_automat = gcnew celluar_automat_grafic();
		Celluar_automat->Show();
	}
	private: System::Void about_Click(System::Object^  sender, System::EventArgs^  e) {
		About^ about = gcnew About();
		about->Show();
	}
	};
}
