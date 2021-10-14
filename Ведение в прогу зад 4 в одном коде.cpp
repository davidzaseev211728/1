// Ведение в прогу зад 4 в одном коде.cpp 
#include <iostream>
using namespace std;
//const float pi = 3.14;//уточнить ету штуку 
int main()
{
    setlocale(LC_ALL, "Rus");

    int z;
    cout << "Выбирайте одну из пяти задач" << endl;
    cout << "1 Периметр и Площадь" << endl;
    cout << "2 Длина окружности " << endl;
    cout << "3 Среднее арифметическое" << endl;
    cout << "4 Сумма,Разность,Произведение и частное квадратов 2ух чисел" << endl;
    cout << "5 Сумма,Разность,Произведение и частное модулей 2ух чисел" << endl;
    cin >> z;
    switch (z)
    {
        //Задание 1
    case 1:
        int a, b, s, p;
        cout << "Enter the sides of the rectangle a and b" << endl;
        cin >> a >> b;
        s = a * b;
        p = 2 * (a + b);
        cout << "Square=" << s << endl;
        cout << "Perimeter=" << p << endl;
        break;

        //Задание 2
    case 2:
        float L;
        int d;
        float pi = 3.14;
        cout << "Enter the diameter of the circle" << endl;
        cin >> d;
        L = pi * d;
        cout << "The length of the circle is " << L << endl;
        break;

        //Задание 3
    case 3:
        float average;
        float aa1, bb1;
        cout << "Enter your numbers aa and bb" << endl;
        cin >> aa1 >> bb1;
        average = (aa1 + bb1) / 2;
        cout << "Youre average is " << average << endl;
        break;
        //Задание 4
    case 4:
        float aa, bb, sum4, subtraction, multiplication, division;//я напортачил с наименованием переменных ,sorry
        cout << "Enter your nonzero numbers a and b" << endl;
        cin >> aa >> bb;
        sum4 = (aa * aa) + (bb * bb);
        subtraction = (aa * aa) - (bb * bb);
        multiplication = (aa * aa) * (bb * bb);
        division = (aa * aa) / (bb * bb);
        cout << "The square of the sum of your numbers is " << sum4 << endl;
        cout << "The square of the subtraction(raznost') of your numbers is " << subtraction << endl;
        cout << "The square of the multiplication(proizvedenie) of your numbers is  " << multiplication << endl;
        cout << "the square of the division(chastnoe) of your number is  " << division << endl;
        break;
        //Задание 5
    case 5:
        float a2, b2, sum, razn, pr, ch;
        cout << "Enter your nonzero number a and b" << endl;
        cin >> a2 >> b2;
        sum = abs(a2 + b2);
        razn = abs(a2 - b2);
        pr = abs(a2 * b2);
        ch = abs(a2 / b2);
        cout << "Модуль суммы чисел a и b равен " << sum << endl;
        cout << "Модуль разности чисел a и b равен " << razn << endl;
        cout << "Модуль произведения чисел a и b равен  " << pr << endl;
        cout << "Модуль частнго чисел a и b равен " << ch << endl;
        break;



    default:
        cout << "Ну вы чего,там ведь написано одну из пяти,куда " << z << " задачу просите" << endl;
        break;
    }
}   
