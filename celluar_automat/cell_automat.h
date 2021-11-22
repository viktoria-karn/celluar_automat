#pragma once
ref class cell_automat
{
private: System::String^ filename = gcnew System::String("gamma.txt");
public:
	void cell_automat::cell_automat_init(array<int ^, 2>^ text_buttons);
	void cell_automat::cell_automat_create(array<int ^, 2>^ text_buttons);
	void cell_automat::cell_automat_save(int flag_create, System::String^ number_demical);
};
	