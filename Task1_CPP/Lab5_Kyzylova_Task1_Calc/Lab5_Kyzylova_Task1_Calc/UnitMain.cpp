#include "UnitMain.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5_Kyzylova_Task1_Calc::UnitMain form;
	Application::Run(%form);
}


