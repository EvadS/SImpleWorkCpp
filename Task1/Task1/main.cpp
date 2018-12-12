#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	float u1 = 0;
	float u2 = 0;

	float v1 = 1;
	float v2 = 1;

	float vi = 0;
	float ui = 0;
	int n = 0;

	// для отображения рус. символов 
	setlocale(LC_ALL, "Russian");
	cout << setw(45) << "**************************************************" << endl;

	// аргумент
	cout << "Введите n >= 3: :\n";
	cin >> n;

	//повторный ввод для получения корректного значения
	while (n < 3)
	{
		cout << "не правильное значение! попытайтесь еще!\n";
		cin >> n;
	}

	for (int i = 3; i <= n; i++){	

		// u2     <-- u1     <-- ui
		// u(i-2) <-- u(i-1) <-- ui
		ui = (u1 - u2  * v1 - v2) / (1 + pow(u1, 2.0) + pow(v1, 2.0));
		vi = (u1 - v1) / (abs(u2 + v1) + 2);
		cout <<  "i : "<< i <<" vi :"<<vi<<" ui"<<ui<< endl;
	
		v2 = v1;
		v1 = vi;

		u2 = u1;
		u1 = ui;
	}


	cout << "Нажмите любую клавишу для продолжения ...." << endl;
	_getch();
	return 0;
}