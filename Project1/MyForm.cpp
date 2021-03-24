#include "MyForm.h"
#include "QuadEquatHeader.h"

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
		j = System::Convert::ToDouble(j_index -> Text),
		k = System::Convert::ToDouble(k_index -> Text),
		eps = System::Convert::ToDouble(eps_area -> Text),
		a = System::Convert::ToDouble(a_area -> Text),
		b = System::Convert::ToDouble(b_area -> Text);
		
	//Проверяем выбор метода и выводим результат в поле ответа
	if (hord_radio->Checked) { result_area->Text = System::Convert::ToString(hord_method(a, b, eps, i, j, k)); }
	else if (poldel_radio->Checked) { result_area->Text = System::Convert::ToString(pol_del_method(a, b, eps, i, j, k)); }
	return System::Void();
}

System::Void Project1::MyForm::drop_button_Click(System::Object^ sender, System::EventArgs^ e)
{

	return System::Void();
}
