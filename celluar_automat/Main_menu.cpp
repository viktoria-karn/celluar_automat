#include "Main_menu.h"
#include <Windows.h>
using namespace celluarautomat; // Название проекта
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Main_menu);
	return 0;
}
