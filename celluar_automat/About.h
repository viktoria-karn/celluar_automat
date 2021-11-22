#pragma once

namespace celluarautomat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox_about;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox_cellar;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->richTextBox_about = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox_cellar = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cellar))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox_about
			// 
			this->richTextBox_about->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_about->Location = System::Drawing::Point(62, 90);
			this->richTextBox_about->Name = L"richTextBox_about";
			this->richTextBox_about->Size = System::Drawing::Size(833, 191);
			this->richTextBox_about->TabIndex = 0;
			this->richTextBox_about->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"О программе Cellar";
			// 
			// pictureBox_cellar
			// 
			this->pictureBox_cellar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_cellar.Image")));
			this->pictureBox_cellar->Location = System::Drawing::Point(186, 308);
			this->pictureBox_cellar->Name = L"pictureBox_cellar";
			this->pictureBox_cellar->Size = System::Drawing::Size(578, 300);
			this->pictureBox_cellar->TabIndex = 2;
			this->pictureBox_cellar->TabStop = false;
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 636);
			this->Controls->Add(this->pictureBox_cellar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox_about);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"About";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Cellar";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cellar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void About_Load(System::Object^  sender, System::EventArgs^  e) {
			try {
			StreamReader^ file = File::OpenText("about.txt");
			richTextBox_about->Text = file->ReadToEnd();
			file->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	};
}
