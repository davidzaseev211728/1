﻿#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");   //pow() -возведение в степень   abs()-модуль   sqrt-квадратный корень

    int z;
    cout << "Выбирайте одну из пяти задач с заданными координатами (x1, y1) и (x2, y2)" << endl;
    cout << "1 Найти расстояние между двумя точками" << endl;
    cout << "2 Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму" << endl;
    cout << "3 Даны точки A, B, C. Найти произведение длин отрезков AC и BC" << endl;
    cout << "4 Даны координаты двух противоположных вершин прямоугольника:(x1, y1), (x2, y2. Найти периметр и площадь данного прямоугольника" << endl;
    cout << "5 Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь." << endl;
    cin >> z;
    switch (z)
    {
    case 1:
        double x1, y1, x2, y2, ras; 
        cout << "Введите координаты двух точек" << endl;
        cin >> x1 >> y1 >> x2 >> y2;
        ras = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        cout << "Расстояние между точками равно "<<ras << endl;
        break;
    case 2:
        int a, b, c, dlinaac,dlinabc,sum;
        cout << "Введите три точки a b c " << endl;
        cin >> a >> b >> c;
        dlinaac = abs(c - a);
        dlinabc = abs(c - b);
        sum = dlinaac + dlinabc;
        cout << "Длина отрезка AC = " << dlinaac << endl << "Длина отрезка BC = " << dlinabc << endl << "Сумма длин отрезков AC и BC = " << sum << endl;
        break;
    case 3:
        int a3, b3, c3, dlac, dlbc, pr;
        cout << "Введите три точки a b c,точка с должна лежать в отрезке ab" << endl;
        cin >> a3 >> b3 >> c3; 
        dlac = abs(c3 - a3);
        dlbc = abs(b3 - c3);
        pr = dlac * dlbc;
        cout << "Произведение длин отрезков AC и BC равно " << pr << endl;
        cout <<"Если ответ неправильный то значение  с не лежит в отрезке ab" << endl;
        break;
    case 4:
        int x11, y11, x22, y22, P, S, A, B;
        cout << "Введите координаты 2ух противоположенных вершин прямоугольника" << endl;
        cin >> x11 >> y11 >> x22 >> y22;
        A = abs(x22 - x11);
        B = abs(y22 - y11);
        P = 2*(A + B);
        S = A * B;
        cout << "Периметр прямоугольника равен " << P <<endl<< "Площадь прямоугольника равна " << S << endl;
        break;

    case 5:
        float s;//т,к в формуле s происходит деление на 2
        float x111, y111, x222, y222, x333, y333, p, P5, h, AB5, AC5, BC5;
        cout << "Введите координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3)" << endl;
        cin >> x111 >> y111 >> x222 >> y222 >> x333 >> y333;   
        AB5 = sqrt(pow((x222 - x111), 2) + pow((y222 - y111), 2));//находим сторону AB5 с помощью координат 
        AC5 = sqrt(pow((x333 - x111), 2) + pow((y333 - y111), 2));//находим сторону AC5 с помощью координат
        BC5 = sqrt(pow((x333 - x222), 2) + pow((y333 - y222), 2));//находим сторону BC5 с помощью координат
        P5 = AB5 + AC5 + BC5; //Ищем периметр
        p = P5 / 2; //ищем полупириметр для формулы 
        s = sqrt(p * (p - AB5) * (p - AC5) * (p - BC5));
       
        cout <<"Периметр = "<< P5 << endl<<"Площадь = " << s << endl;
        break;
    default:
        cout << "Ну вы чего,там ведь написано одну из пяти ,куда " << z << " задачу просите"<< endl;
    return 0;

    }
}