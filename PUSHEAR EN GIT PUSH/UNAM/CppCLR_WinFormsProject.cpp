#include "pch.h"
#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
    // Habilitar estilos visuales y configuraciones necesarias
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Asegúrate de que el espacio de nombres coincide con el de Form1
    Application::Run(gcnew CppWinFormsApp1::MyForm1());
    return 0;
}
