#include "pch.h"
#include "CrearDisparadores.h"


using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"
//#include "CrearTabla.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  //Application::Run(gcnew CppCLRWinFormsProject::Form1());
  Application::Run(gcnew CppCLRWinFormsProject::CrearDisparadores());
  return 0;
}