#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	// ��� ����������� ���. �������� 
	setlocale(LC_ALL, "Russian");
	cout << setw(45) << "**************************************************" << endl;

	const int N = 11;

	int row = N;
	int col = N;
	int array[N][N] = { { 0 } };

	//���������� ������� ����������
	cout << "��������� �������� �������: " << endl;
	
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			array[row][col] = std::rand() % 9 + 1;			
		}
	}


	// ����� �� �����
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
			// i == j ���������
			// i < j ����
			if (i <= j){
				array[i][j] = 0;
			}
		}
	}

	cout << "���������: " << endl;
	// ����� �� �����
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			std::cout << array[row][col] << " ";
		}
		cout << endl;
	}

	cout << "������� ����� ������� ��� ����������� ...." << endl;
	_getch();
	return 0;
}