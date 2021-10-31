// ВВП 6.cpp  pow() -возведение в степень   abs()-модуль   sqrt-квадратный корень
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int z, A, B, C, x, y;
    cout << "Выбирайте одну из семи задач" << endl;
    cout << "1 Поменять местами содержимое переменных A и B и вывести новые значения A и B." << endl;
    cout << "2 Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C." << endl;
    cout << "3 Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C." << endl;
    cout << "4 Найти значение функции y = 3x**6 − 6x**2 − 7 при данном значении x" << endl;
    cout << "5 Найти значение функции y = 4(x−3)**6 − 7(x−3)**3 + 2 при данном значении x" << endl;
    cout << "6 Дано число A. Вычислить A**8 , используя вспомогательную переменную и три операции умножения." << endl;
    cout << "7 Дано число A. Вычислить A**15, используя две вспомогательные переменные и пять операций умножения." << endl;
    cin >> z;
    switch (z)
    {
//Задача 1
    case 1:
        cout << "Введите значение A и B" << endl;
        cin >> A >> B;
        swap(A,B);
        cout << A << endl << B << endl;
        break;
//Задача 2
    case 2:
        cout << "Введите значение A , B и C" << endl;
        cin >> A >> B >> C;
        swap(A, B);
        swap(B, C);
        swap(C, A);
        swap(B, A);
        cout << A << endl << B << endl << C << endl;
        break;
//Задача 3
    case 3:
        cout << "Введите значение A , B и C" << endl;
        cin >> A >> B >> C;
        swap(B,A);
        swap(B,C);
        
        cout << A << endl << B << endl << C << endl;
        break;
//Задача 4
    case 4:
        cout << "Введите x" << endl;
        cin >> x;
        y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
        cout << y << endl;
        break;
//Задача 5
    case 5:
        cout << "Введите x" << endl;
        cin >> x;
        y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
        cout << y << endl;
        break;
//Задача 6
    case 6:
        cout << "Введите А" << endl;    
        cin >> A;
        B = pow(A, 5);
        A = A * A * A * B;  
        cout << A << endl;
        break;
//Задача 7                              1 073 741 824    4V15
    case 7:
        cout << "Введите А" << endl;
        cin >> A;
        B = pow(A, 10);
        C = A * A * A * A * A * B;
        cout << C << endl;
        break;
    default:
        cout << "Ну вы чего,там ведь написано одну из семи ,куда " << z << " задачу просите" << endl;
    return 0;


    }
    
}
