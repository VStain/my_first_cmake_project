/*
Задача 1. Простейший проект
В этом задании вам нужно создать простейший проект с помощью CMake.

Создайте проект CMake my_first_cmake_project, в котором будет исполняемая программа my_first_cmake_program. Программа должна спрашивать имя пользователя и приветствовать его.

Пример работы программы
Консоль
Введите имя: Виталий
Здравствуйте, Виталий!
*/

// my_first_cmake_project.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	string user_name;
	cout << "Введите имя: ";
	cin >> user_name;
	cout << "Здравствуйте, " << user_name << '!' << endl;

	system("pause");
	return 0;
}
