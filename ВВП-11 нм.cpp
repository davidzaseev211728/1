#include <iostream>
#include <stdbool.h>
#include <ctime>
#include <string>

using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	int a, b, c, max, max1, max2;

	cout << "1 Задание\n";
	cout << "Введите значения A и B\n";
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;


	if (a == b)
	{
		a = 0;
		b = 0;
		cout << "A = " << a << "\t" << "B = " << b << endl;
	}
	else
	{
		max = (a > b ? a : b);
		a = max;
		b = max;
		cout << "A = " << a << "\t" << "B = " << b << endl;
	}
	cout << "\n";
	cout << "Задание 2\n";

	cout << "Введите значения A, B, C\n";
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;

	if (a > b)
	{
		if (c > b)
		{
			cout << a + c << endl;
		}
		else
		{
			cout << a + b << endl;
		}
	}
	else
	{
		if (a > c)
		{
			cout << b + a << endl;
		}
		else
		{
			cout << b + c << endl;
		}
	}

	cout << "\n";
	cout << "Задание 3 \n";


	int x1, x2, x3, y1, y2, y3;
	double rastb, rastc;

	cout << "введите координаты точек A,B,C\n";
	cout << "X1 = "; cin >> x1;
	cout << "Y1 = "; cin >> y1;
	cout << "X2 = "; cin >> x2;
	cout << "Y2 = "; cin >> y2;
	cout << "X3 = "; cin >> x3;
	cout << "Y3 = "; cin >> y3;

	rastb = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	rastc = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	cout << "Расстояние от a до b " << rastb << "       " << "Расстояние от a до c " << rastc << "\n" << endl;
	if (rastb > rastc)
	{
		cout << "Расстояние от а до b больше чем от а до с \n";
	}
	else if (rastc > rastb)
	{
		cout << "Расстояние от а до с больше чем от а до b\n";
	}
	else
	{
		cout << "Расстояния равны";
	}
	cout << "\n";
	cout << "Задание 4 \n";

	cout << "введите координату точки\n";
	cout << "X1 = "; cin >> x1;
	cout << "Y1 = "; cin >> y1;

	if (x1 > 0 && y1 > 0)
	{
		cout << "Точка находится в 1 четверти";
	}
	else if (x1 > 0 && y1 < 0)
	{
		cout << "Точка находится в 4 плоскости\n";
	}
	else if (x1 < 0 && y1 < 0)
	{
		cout << "Точка находится в 3 плоскости\n";
	}
	else if (x1 < 0 && y1 > 0)
	{
		cout << "Точка находится в 2 плоскости\n";
	}
	else
	{
		cout << "Точка имеет координату (0 ; 0)\n";
	}
	cout << "\n";
	cout << "Задание 5 \n";
	cout << "Введите число\n";
	cout << "A = "; cin >> a;

	if (a > 0)
	{
		if (a % 2 == 0)
		{
			cout << "число положительное четное ";
		}
		else
		{
			cout << "число положительное нечётное";
		}
	}
	else if (a < 0)
	{
		if (a % 2 == 0)
		{
			cout << "число отрицательное четное ";
		}
		else
		{
			cout << "число отрицательное нечётное";
		}
	}
	else
	{
		cout << "число нулевое";
	}
	cout << "\n";
	cout << "Задание 6 \n";

	cout << "Введите число: 1 < a < 999\n";
	cout << "A = "; cin >> a;

	if (a % 2 == 0)
	{
		if (a > 9 && a < 100)
		{
			cout << "число чётное двузначное";
		}
		else
		{
			cout << "число чётное трехзначное";
		}
	}
	else
	{
		if (a > 9 && a < 100)
		{
			cout << "число нечётное двузначное";
		}
		else
		{
			cout << "число нечётное трехзначное";
		}
	}
	cout << "\n";
	return 0;
}