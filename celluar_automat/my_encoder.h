#pragma once
ref class my_encoder
{
private: System::String^ filename = gcnew System::String("gamma.txt");
public: System::String^ result_message;
public: System::String^ my_encoder::crypt_start(System::String^ message, int length_message);
};

