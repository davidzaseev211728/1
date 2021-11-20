#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int z, n, a, b, c, k, x, y;
	int K = 0, u = 0;
	cout << "Задача № ";
	cin >> z;
	switch (z)
	{
	case 1:
		cout << "Введите N секунд\n";
		cin >> n;
		a = n / 60;
		b = a * 60;
		c = n - b;
		cout << c;
		break;
	case 2:
		cout << "Введите день года\n";
		cin >> k;
		if (k % 7 == 0)
		{
			cout << "Номер дня недели---0\n";
		}
		else {
			while (k > 7)
				k -= 7;
			cout << "Номер дня недели--- "  << k << endl;
		}	
		break;
	case 3:
		cout << "Введите число K от 1 до 365:  " << endl;
		cout << "K = "; cin >> K;
		cout << "Введите число N от 1 до 7:  " << endl;
		cout << "N = "; cin >> u;
		cout << "Номер дня недели для К-го дня года = " << ((K + u - 2) % 7) + 1 << endl;
		break;
	case 4:
		cout << "Введите A B C " << endl;
		cin >> a >> b >> c;
		x = (a * b) / c;
		y = (a * b) % c;
		cout << x << "-количество квадратов, размещенных на прямоугольнике" << endl;
		cout << y << "-незанятая часть прямоугольника" << endl;
		break;
	case 5:
		cout << "введите номер года" << endl;
		cout << "X = "; cin >> x;
		cout << "Номер столетия " << x << "года: " << int((x - 1) / 100) + 1 << endl;
		break;
	}
  
}


