﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int z, a, b, c, x, k;
    cout << "Выбирайте одну из пяти задач:\n";
    cout << "1 Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл\n";
    cout << "2 Даны целые +-ые числа A и B (A > B).На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).Найти количество отрезков B,размещенных на отрезке A.\n";
    cout << "3 Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.\n";
    cout << "4 Дано двузначное число.Вывести число, полученное при перестановке цифр исходного числа.\n";
    cout << "5 Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.\n";
    cout << "Задача № ";
    cin >> z;
    switch (z)
    {
    case 1:
        cout << "Введите размер файла в байтах:\n";
        cin >> b;
        k = (b - 1) / 1024 + 1;
        cout << "файл в килобайтах равен " << k << endl;
        break;
    case 2:
        cout << "Введите А и B, (A>B)!\n";
        cin >> a >> b;
        cout << "Колл отрезков B на отрезке А равно " << a / b << endl;
        break;
    case 3:
        cout << "Введите А и B, (A>B)!\n";
        cin >> a >> b;
        x = a % b;
        cout << "Незанятая часть отрезка A равна " << x << endl;
        break;
    case 4:
        cout << "Введите двухзначное число\n";
        cin >> x;
        a = x / 10;
        c = x % 10 * 10;
        x = a + c;
        cout << "При перестановки цифр введённого числа получилось число " << x << endl;
        break;

    case 5:
        cout << "Введите трехзначное число\n";
        cin >> x;
        a = x % 100 / 10 * 100;
        b = x % 10 * 10;
        c = x / 100;
        x = a + b + c;
        cout << "При перестановки цифр введённого числа получилось число " << x << endl;
        break;

    default:
        cout << "Ну вы чего там ведь написано из пяти задач, куда " << z << " задачу просите" << endl;
        break;
    }

}