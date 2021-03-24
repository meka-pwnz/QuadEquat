#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(% form);
}

System::Void Project1::MyForm::enter_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Конвертируем введеные пользователем данные из string -> double, и записываем их в соответствующие переменные.
	double i = System::Convert::ToDouble(i_index -> Text),
		j = System::Convert::ToDouble(i_index -> Text),
		k = System::Convert::ToDouble(i_index -> Text),
		eps = System::Convert::ToDouble(i_index -> Text),
		a = System::Convert::ToDouble(i_index -> Text),
		b = System::Convert::ToDouble(i_index -> Text);
















	return System::Void();
}
