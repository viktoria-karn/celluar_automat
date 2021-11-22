#include "encoder.h"
/*
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;
System::String^ encoder::crypt_start(System::String^ message, int length_message) {
	//String^ Filename;
	//Filename = gcnew String("gamma.txt");
	StreamReader^ file = File::OpenText(filename);
	for (int i = 0; i < length_message; ++i) {
		int gamma_int = Convert::ToInt64(file->ReadLine());
		result_message += Convert::ToChar(message[i] ^ gamma_int);
	}
	file->Close();
	return result_message;
}
*/