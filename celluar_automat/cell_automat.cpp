#include "cell_automat.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

	void cell_automat::cell_automat_init(array<int ^, 2>^ text_buttons) {
		srand(time(NULL)); // инициализируем генератор случайных чисел
		int k = 1 + rand() % (30);
		int j = 0;
		for (int i = 0; i < 30; ++i) {
			if (i == k - 1) {
				text_buttons[i, j] = 1;
			}
			else {
				text_buttons[i, j] = 0;
			}
		}
	}
	void cell_automat::cell_automat_create(array<int ^, 2>^ text_buttons) {
		int max = 30 - 1;
		int flag = 0;
		for (int j = 1; j < 30; j++)
		{

			for (int i = 0; i < 30; i++)
			{
				//черная-вернхяя клетка и вправо по диагонали

				if (Convert::ToInt32(text_buttons[i, j - 1])== 1 && (i != max && Convert::ToInt32(text_buttons[i + 1, j - 1]) == 1) && (i == 0 || Convert::ToInt32(text_buttons[i - 1, j - 1]) == 0)) {
					text_buttons[i, j] = 1;
					flag = 1;
				}
				//черная-только верхняя клетка
				if (Convert::ToInt32(text_buttons[i, j - 1])== 1 && (i != 0 && Convert::ToInt32(text_buttons[i - 1, j - 1]) == 0) && (i != max && Convert::ToInt32(text_buttons[i + 1, j - 1]) == 0)) {
					text_buttons[i, j] = 1;
					flag = 1;
				}
				//черная-только клетка вправо по диагонали

				if (Convert::ToInt32(text_buttons[i, j - 1]) == 0 && (i == 0 || Convert::ToInt32(text_buttons[i - 1, j - 1]) == 0) && (i != max && Convert::ToInt32(text_buttons[i + 1, j - 1]) == 1)) {
					text_buttons[i, j] = 1;
					flag = 1;
				}
				//черная-только клетка влево по диагонали

				if (Convert::ToInt32(text_buttons[i, j - 1]) == 0 && (i != 0 && Convert::ToInt32(text_buttons[i - 1, j - 1]) == 1) && (i == max || Convert::ToInt32(text_buttons[i + 1, j - 1]) == 0)) {
					text_buttons[i, j] = 1;
					flag = 1;
				}
				if (!flag) {
					text_buttons[i, j] = 0;
				}
				flag = 0;
			}

		}

	}
	void cell_automat::cell_automat_save(int flag_create,String^ number_demical) {
		StreamWriter^ req = gcnew StreamWriter(filename, flag_create);
		req->Write(number_demical);
		req->Write(Environment::NewLine);
		req->Close();
	}









