#include "my_decoder.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;
String^ my_decoder::my_decoder_start(String^ filename, int length_message,String^ message){
   result_message="";
	StreamReader^ file = File::OpenText(filename);
	for (int i = 0; i < length_message; ++i) {
		int gamma_int = Convert::ToInt32(file->ReadLine());
		result_message += Convert::ToChar(message[i] ^ gamma_int);
	}
	file->Close();
	return result_message;
}