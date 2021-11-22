#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "cell_automat.h"
#include "my_generator.h"
#include "my_encoder.h"
#include "my_decoder.h"
namespace celluarautomat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для celluar_automat_grafic
	/// </summary>
	public ref class celluar_automat_grafic : public System::Windows::Forms::Form
	{
	public:
		celluar_automat_grafic(void)
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
		~celluar_automat_grafic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  generate_start;
	private: System::Windows::Forms::Button^  create;
	private: System::Windows::Forms::Button^  drop;
	private: System::Windows::Forms::Label^  number_binary;
	private: System::Windows::Forms::TextBox^  textBox_number_binary;


	private: System::Windows::Forms::Label^  number_demical;
	private: System::Windows::Forms::TextBox^  textBox_number_demical;
	private: System::Windows::Forms::RichTextBox^  richTextBox_text_message;

	private: System::Windows::Forms::Button^  encrypt;
	private: System::Windows::Forms::Button^  decrypt;


	private: System::Windows::Forms::Button^  save_file;
	private: System::Windows::Forms::RichTextBox^  richTextBox_result;


	private: System::Windows::Forms::Label^  label_message;
	private: System::Windows::Forms::Label^  label_result;
	private: System::Windows::Forms::Label^  label_count;
	private: System::Windows::Forms::ComboBox^  comboBox_count;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog_decrypt_file;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog_save_file;
	private: System::Windows::Forms::Button^  button_drop;



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(celluar_automat_grafic::typeid));
			this->generate_start = (gcnew System::Windows::Forms::Button());
			this->create = (gcnew System::Windows::Forms::Button());
			this->drop = (gcnew System::Windows::Forms::Button());
			this->number_binary = (gcnew System::Windows::Forms::Label());
			this->textBox_number_binary = (gcnew System::Windows::Forms::TextBox());
			this->number_demical = (gcnew System::Windows::Forms::Label());
			this->textBox_number_demical = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox_text_message = (gcnew System::Windows::Forms::RichTextBox());
			this->encrypt = (gcnew System::Windows::Forms::Button());
			this->decrypt = (gcnew System::Windows::Forms::Button());
			this->save_file = (gcnew System::Windows::Forms::Button());
			this->richTextBox_result = (gcnew System::Windows::Forms::RichTextBox());
			this->label_message = (gcnew System::Windows::Forms::Label());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->label_count = (gcnew System::Windows::Forms::Label());
			this->comboBox_count = (gcnew System::Windows::Forms::ComboBox());
			this->openFileDialog_decrypt_file = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog_save_file = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button_drop = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// generate_start
			// 
			this->generate_start->Location = System::Drawing::Point(920, 37);
			this->generate_start->Name = L"generate_start";
			this->generate_start->Size = System::Drawing::Size(162, 38);
			this->generate_start->TabIndex = 0;
			this->generate_start->Text = L"Сгенерировать начальное состояние автомата";
			this->generate_start->UseVisualStyleBackColor = true;
			this->generate_start->Click += gcnew System::EventHandler(this, &celluar_automat_grafic::button1_Click);
			// 
			// create
			// 
			this->create->Location = System::Drawing::Point(1107, 35);
			this->create->Name = L"create";
			this->create->Size = System::Drawing::Size(162, 39);
			this->create->TabIndex = 1;
			this->create->Text = L"Построить автомат";
			this->create->UseVisualStyleBackColor = true;
			this->create->Click += gcnew System::EventHandler(this, &celluar_automat_grafic::create_Click_1);
			// 
			// drop
			// 
			this->drop->BackColor = System::Drawing::Color::LightCoral;
			this->drop->Location = System::Drawing::Point(717, 240);
			this->drop->Name = L"drop";
			this->drop->Size = System::Drawing::Size(162, 39);
			this->drop->TabIndex = 2;
			this->drop->Text = L"Сброс";
			this->drop->UseVisualStyleBackColor = false;
			this->drop->Click += gcnew System::EventHandler(this, &celluar_automat_grafic::drop_Click);
			// 
			// number_binary
			// 
			this->number_binary->AutoSize = true;
			this->number_binary->Location = System::Drawing::Point(717, 112);
			this->number_binary->Name = L"number_binary";
			this->number_binary->Size = System::Drawing::Size(205, 13);
			this->number_binary->TabIndex = 3;
			this->number_binary->Text = L"Сгенерированное число в двоичной СС";
			// 
			// textBox_number_binary
			// 
			this->textBox_number_binary->Location = System::Drawing::Point(717, 164);
			this->textBox_number_binary->Name = L"textBox_number_binary";
			this->textBox_number_binary->Size = System::Drawing::Size(229, 20);
			this->textBox_number_binary->TabIndex = 4;
			// 
			// number_demical
			// 
			this->number_demical->AutoSize = true;
			this->number_demical->Location = System::Drawing::Point(1031, 112);
			this->number_demical->Name = L"number_demical";
			this->number_demical->Size = System::Drawing::Size(216, 13);
			this->number_demical->TabIndex = 5;
			this->number_demical->Text = L"Сгенерированное число в десятичной СС";
			// 
			// textBox_number_demical
			// 
			this->textBox_number_demical->Location = System::Drawing::Point(1034, 164);
			this->textBox_number_demical->Name = L"textBox_number_demical";
			this->textBox_number_demical->Size = System::Drawing::Size(213, 20);
			this->textBox_number_demical->TabIndex = 6;
			// 
			// richTextBox_text_message
			// 
			this->richTextBox_text_message->Location = System::Drawing::Point(717, 375);
			this->richTextBox_text_message->Name = L"richTextBox_text_message";
			this->richTextBox_text_message->Size = System::Drawing::Size(232, 155);
			this->richTextBox_text_message->TabIndex = 7;
			this->richTextBox_text_message->Text = L"";
			// 
			// encrypt
			// 
			this->encrypt->Location = System::Drawing::Point(973, 384);
			this->encrypt->Name = L"encrypt";
			this->encrypt->Size = System::Drawing::Size(100, 29);
			this->encrypt->TabIndex = 8;
			this->encrypt->Text = L"Зашифровать";
			this->encrypt->UseVisualStyleBackColor = true;
			this->encrypt->Click += gcnew System::EventHandler(this, &celluar_automat_grafic::encrypt_Click);
			// 
			// decrypt
			// 
			this->decrypt->Location = System::Drawing::Point(973, 430);
			this->decrypt->Name = L"decrypt";
			this->decrypt->Size = System::Drawing::Size(100, 29);
			this->decrypt->TabIndex = 9;
			this->decrypt->Text = L"Расшифровать";
			this->decrypt->UseVisualStyleBackColor = true;
			this->decrypt->Click += gcnew System::EventHandler(this, &celluar_automat_grafic::decrypt_Click);
			// 
			// save_file
			// 
			this->save_file->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->save_file->Location = System::Drawing::Point(1085, 236);
			this->save_file->Name = L"save_file";
			this->save_file->Size = System::Drawing::Size(162, 47);
			this->save_file->TabIndex = 10;
			this->save_file->Text = L"Сохранить в файл";
			this->save_file->UseVisualStyleBackColor = false;
			this->save_file->Click += gcnew System::EventHandler(this, &celluar_automat_grafic::save_file_Click);
			// 
			// richTextBox_result
			// 
			this->richTextBox_result->Location = System::Drawing::Point(1093, 375);
			this->richTextBox_result->Name = L"richTextBox_result";
			this->richTextBox_result->Size = System::Drawing::Size(232, 155);
			this->richTextBox_result->TabIndex = 11;
			this->richTextBox_result->Text = L"";
			// 
			// label_message
			// 
			this->label_message->AutoSize = true;
			this->label_message->Location = System::Drawing::Point(717, 345);
			this->label_message->Name = L"label_message";
			this->label_message->Size = System::Drawing::Size(97, 13);
			this->label_message->TabIndex = 13;
			this->label_message->Text = L"Текст сообщения";
			// 
			// label_result
			// 
			this->label_result->AutoSize = true;
			this->label_result->Location = System::Drawing::Point(1090, 345);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(59, 13);
			this->label_result->TabIndex = 14;
			this->label_result->Text = L"Результат";
			// 
			// label_count
			// 
			this->label_count->AutoSize = true;
			this->label_count->Location = System::Drawing::Point(714, 19);
			this->label_count->Name = L"label_count";
			this->label_count->Size = System::Drawing::Size(118, 13);
			this->label_count->TabIndex = 15;
			this->label_count->Text = L"Количество бит числа";
			// 
			// comboBox_count
			// 
			this->comboBox_count->FormattingEnabled = true;
			this->comboBox_count->Location = System::Drawing::Point(711, 53);
			this->comboBox_count->Name = L"comboBox_count";
			this->comboBox_count->Size = System::Drawing::Size(121, 21);
			this->comboBox_count->TabIndex = 16;
			// 
			// openFileDialog_decrypt_file
			// 
			this->openFileDialog_decrypt_file->DefaultExt = L"txt";
			this->openFileDialog_decrypt_file->FileName = L"gamma.txt";
			this->openFileDialog_decrypt_file->Filter = L"Текстовые файлы (*.txt)|*.txt";
			this->openFileDialog_decrypt_file->ValidateNames = false;
			// 
			// button_drop
			// 
			this->button_drop->Location = System::Drawing::Point(973, 476);
			this->button_drop->Name = L"button_drop";
			this->button_drop->Size = System::Drawing::Size(100, 29);
			this->button_drop->TabIndex = 17;
			this->button_drop->Text = L"Сброс";
			this->button_drop->UseVisualStyleBackColor = true;
			this->button_drop->Click += gcnew System::EventHandler(this, &celluar_automat_grafic::button_drop_Click);
			// 
			// celluar_automat_grafic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1337, 680);
			this->Controls->Add(this->button_drop);
			this->Controls->Add(this->comboBox_count);
			this->Controls->Add(this->label_count);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->label_message);
			this->Controls->Add(this->richTextBox_result);
			this->Controls->Add(this->save_file);
			this->Controls->Add(this->decrypt);
			this->Controls->Add(this->encrypt);
			this->Controls->Add(this->richTextBox_text_message);
			this->Controls->Add(this->textBox_number_demical);
			this->Controls->Add(this->number_demical);
			this->Controls->Add(this->textBox_number_binary);
			this->Controls->Add(this->number_binary);
			this->Controls->Add(this->drop);
			this->Controls->Add(this->create);
			this->Controls->Add(this->generate_start);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"celluar_automat_grafic";
			this->Text = L"Cellar";
			this->Load += gcnew System::EventHandler(this, &celluar_automat_grafic::celluar_automat_grafic_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		cell_automat^ matrix = gcnew cell_automat();
		my_generator^ gener = gcnew my_generator();
		my_encoder^ crypt = gcnew my_encoder();
		my_decoder^ decoder = gcnew my_decoder();
		array<Button^, 2>^ buttons;
		array<int^, 2>^ text_buttons = gcnew array<int^, 2>(30, 30);
		array<int^, 2>^ flags_open;
		int flag_generate_begin = 0;
		int flag_create = 0;
		int flag_crypto = 0;
		int flag_crypto_first = 0;
		int flag_append = 0;
		int flag_work_file = 0;
		
		//конвертация из типа String^ в char*
		char* convert(String^ string) {
			using namespace System::Runtime::InteropServices;
			char *str = (char*)(void*)Marshal::StringToHGlobalAnsi(string);
			return str;
		}


		//проверка числа
		int check_digit(char * ptr) {
			int flag = 0;
			while (*ptr != NULL) {
				if (!flag && *ptr == '0') {
					return 1;
				}
				else flag = 1;
				if (*ptr < '0' || *ptr > '9') {
					return 1;
				}
				++ptr;
			}
			return 0;
		}

#pragma endregion
		//генерация начального состояния автомата
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		int j = 0;
		matrix->cell_automat_init(text_buttons);
		for (int i = 0; i < 30; ++i) {
			if (Convert::ToInt32(text_buttons[i, j]) == 1) {
				buttons[i, j]->BackColor = Color::Black;
			}
			else {
				buttons[i, j]->BackColor = Color::LightGray;
			}
		}
		flag_generate_begin = 1;
	}
	 //загрузка формы
	private: System::Void celluar_automat_grafic_Load(System::Object^  sender, System::EventArgs^  e) {
		//расширение формы на полный экран
		this->WindowState = FormWindowState::Maximized;
		//заполнение comboBox
		for (int i = 2; i <= 30; ++i) {
			this->comboBox_count->Items->Add(i);
		}
		//отрисовка поля на форме	
		buttons = gcnew array<Button^, 2>(30, 30);

		for (int i = 0; i < 30; i++)
		{
			for (int j = 0; j < 30; j++)
			{
				Button^ btn = gcnew Button();
				btn->Size = Drawing::Size(20, 20);
				btn->Location = Drawing::Point(50 + i * 20, 50 + j * 20);

				btn->FlatStyle = FlatStyle::Flat;
				btn->FlatAppearance->BorderColor = Color::LightGray;
				Controls->Add(btn);
				buttons[i, j] = btn;

			}
		}
	}

	//построение автомата
	private: System::Void create_Click_1(System::Object^  sender, System::EventArgs^  e) {

		if (flag_generate_begin == 0) {
			MessageBox::Show(this, "Вы не сгенерировали начальное состояние автомата.", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (comboBox_count->Text == "" || check_digit(convert((comboBox_count->Text)))) {
			MessageBox::Show(this, "Вы не выбрали количество бит числа.", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			matrix->cell_automat_create(text_buttons);
			for (int j = 1; j < 30; j++)
			{
				for (int i = 0; i < 30; i++)
				{
					if (Convert::ToInt32(text_buttons[i, j]) == 1)
						buttons[i, j]->BackColor = Color::Black;
					else buttons[i, j]->BackColor = Color::LightGray;

				}
			}

			String^ number_binary;

			int limit = Convert::ToInt64(comboBox_count->Text);
			//если зашифровываем и пользователь выставил лимит больше 16,просим уменьшить,по умолчанию выполнится шифрование с числом длины 16
			if (flag_crypto && limit > 16) {
				if (!flag_crypto_first) {
					MessageBox::Show(this, "Вы выбрали слишком большое количество битов числа. Сейчас выполнилось шифрование с числом длины 16 (максимальная длина числа для шифрования).", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					comboBox_count->Text = Convert::ToString(16);
				}
				limit = 16;
			}
			number_binary = gener->create(text_buttons, limit);
			//выводим получившиеся числа
			textBox_number_binary->Text = number_binary;
			textBox_number_demical->Text = Convert::ToString(Convert::ToInt64(number_binary, 2));
			//сохраняем результаты в файл
			matrix->cell_automat_save(flag_create, textBox_number_demical->Text);
			flag_create = 1;

		}

	}
	//сброс поля клеточного автомата
	private: System::Void drop_Click(System::Object^  sender, System::EventArgs^  e) {
		flag_generate_begin = 0;
		for (int j = 0; j < 30; j++)
			for (int i = 0; i < 30; i++)
				buttons[i, j]->BackColor = Color::LightGray;
	}
	 //зашифрование сообщения
	private: System::Void encrypt_Click(System::Object^  sender, System::EventArgs^  e) {
		flag_create = 0;
		flag_crypto = 1;
		flag_crypto_first = 0;
		String^ message = richTextBox_text_message->Text;
		//String^ result_message;
		int length_message = message->Length;
		//для шифрования генерируем последовательность из чисел
		for (int i = 0; i < length_message; ++i) {
			drop->PerformClick();
			generate_start->PerformClick();
			create->PerformClick();
			flag_crypto_first = 1;
			Thread::Sleep(1000);
		}
		//выводим результат шифрования
		richTextBox_result->Text = crypt->crypt_start(message, length_message);
		flag_crypto = 0;

	}
    //сохранение последовательности в файл
	private: System::Void save_file_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Filename_write = "";
		String^ Filename_read;
		if ((MessageBox::Show(this, "Вы хотите создать новый файл с последовательностью?", "Сообщение", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)) {
			if (this->folderBrowserDialog_save_file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				Filename_write += this->folderBrowserDialog_save_file->SelectedPath;
				Filename_write += "/generate.txt";
				flag_append = 1;
			}
		}
		else {
			MessageBox::Show(this, "Выберите файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (this->openFileDialog_decrypt_file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				Filename_write = this->openFileDialog_decrypt_file->FileName;
				flag_append = 1;
			}
		}

		Filename_read = gcnew String("gamma.txt");
		StreamReader^ file_r = File::OpenText(Filename_read);
		StreamWriter^ file_w = gcnew StreamWriter(Filename_write, flag_append);
		while (!file_r->EndOfStream) {
			file_w->Write(file_r->ReadLine());
			file_w->Write(Environment::NewLine);
		}
		file_r->Close();
		file_w->Close();
		StreamWriter^ file_rewrite = gcnew StreamWriter(Filename_read, false);
		file_rewrite->Close();
	}
    //дешифрование сообщения
	private: System::Void decrypt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Filename;
		if ((MessageBox::Show(this, "Вы хотите использовать последовательность,созданную в этом сеансе работы?", "Сообщение", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)) {
			if (this->openFileDialog_decrypt_file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				Filename = this->openFileDialog_decrypt_file->FileName;
			}
		}
		else {
			Filename = gcnew String("gamma.txt");
		}
		String^ message = richTextBox_text_message->Text;
		int length_message = message->Length;


		richTextBox_result->Text = decoder->my_decoder_start(Filename, length_message, message);
	}
     //очистка полей для исходного и зашифрованного сообщений
	private: System::Void button_drop_Click(System::Object^  sender, System::EventArgs^  e) {
		richTextBox_text_message->Text = "";
		richTextBox_result->Text = "";
	}

	};
}