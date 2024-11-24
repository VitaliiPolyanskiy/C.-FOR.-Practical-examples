
#include <iostream>
using namespace std;

int main()
{
	// Вывести на экран таблицу символов в формате «ASCII-код – символ».
	for (int i = 0; i <= 127; i++)
	{
		cout << i << "-" << char(i) << "\t";
	}

	// Написать программу, которая выводит на экран следующее изображение.
	int side, i, j;
	cout << "\n\nEnter a side of the square: ";
	cin >> side;
	cout << '\n';
	for (i = 0; i < side; i++)
	{
		for (j = 0; j < side; j++)
		{
			if (i == 0 || j == 0 || i == side - 1 || j == side - 1 || i == j || i == side - 1 - j)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	cout << endl << endl;

	// Написать программу, которая выводит на экран заполненный звездочками равнобедренный треугольник.
	// При этом пользователь вводит высоту треугольника.

	int width, height;
	cout << "\nEnter a height of the square: ";
	cin >> height;
	width = height * 2 - 1;
	cout << '\n';
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i >= j - width / 2 && i >= width / 2 - j)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	cout << endl << endl;

	return 0;
}