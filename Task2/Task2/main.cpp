#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	// для отображения рус. символов 
	setlocale(LC_ALL, "Russian");
	cout << setw(45) << "**************************************************" << endl;

	const int N = 11;

	int row = N;
	int col = N;
	int array[N][N] = { { 0 } };

	//Заполнение массива значениями
	cout << "Начальное значение массива: " << endl;
	
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			array[row][col] = std::rand() % 9 + 1;			
		}
	}


	// вывод на экран
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			std::cout << array[row][col] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < row ; i++){
		for (int j = i ; j < col; j++){
			// i == j диагональ
			// i < j выше
			if (i <= j){
				array[i][j] = 0;
			}
		}
	}

	cout << "Результат: " << endl;
	// вывод на экран
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			std::cout << array[row][col] << " ";
		}
		cout << endl;
	}

	cout << "Нажмите любую клавишу для продолжения ...." << endl;
	_getch();
	return 0;
}