#include "PetWindow.h"
#include <Windows.h>
#include "classLib.h"

using namespace Project4;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PetWindow);
	return 0;
}