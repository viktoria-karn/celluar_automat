#include "my_generator.h"
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

String^ my_generator::create(array<int^, 2>^ text_buttons, int limit) {
	String^ number_binary;
	int k_copy = 0;
	srand(time(NULL)); // инициализируем генератор случайных чисел

	for (int i = 0; i < 30; ++i) {
		int k = rand() % (2);
		if ((k_copy || k) && limit) {
		//для генерирования числа используется 29 строчка(последняя)
			if (Convert::ToInt32(text_buttons[i, 29]) == 1)
				number_binary += "1";
			else number_binary += "0";
			--limit;
		}
		if (i <= limit - 1) {
			k_copy = 1;
		}
	}

	if (Convert::ToInt64(number_binary, 2) == 0)
		number_binary = "1";
	return number_binary;
}
