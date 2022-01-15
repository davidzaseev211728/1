#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int N, K, L, i, d, a = 0, min1 = 100000;
    double avg;
    cout << "#1\n";
    cout << "введите размер массива: \n";
    cin >> N;
    int* arr = new int[N];
    cout << "введите границы: \n";
    cin >> K >> L;
    for (i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }
    cout << "массив: ";
    for (int m = 0; m < N; m++)
    {
        cout << arr[m] << " ";
    }
    cout << "\n";
    cout << "числа: ";
    for (i = K; i <= L; i++)
    {
        a += arr[i];
        cout << arr[i] << ' ';
    }
    cout << "\nсреднее арифметическое чисел: ";
    cout << "\n";
    avg = a / (L - K + 1);
    cout << avg << endl;
    cout << "_________________________________________\n";
    cout << "#2\n";
    cout << "массив: ";
    int ar[] = { 0, 3, 6, 9, 12, 15 };
    for (int m = 0; m < 6; m++)
    {
        cout << ar[m] << " ";
    }
    cout << "\n";
    N = sizeof(ar) / sizeof(int);
    for (i = 0; i < N - 2; i++)
    {
        if (ar[i] - ar[i + 1] == ar[i + 1] - ar[i + 2])
        {
            d = ar[i - 1] - ar[i - 2];
        }
        else if (ar[i - 1] - ar[i - 2] != ar[i] - ar[i - 1])
        {
            d = 0;
            break;
        }
    }
    cout << "разность прогрессии: " << d << endl;
    cout << "__________________________________\n";
    cout << "#3\n";
    cout << "Введите длинну массива: ";
    cin >> N;
    int* mas = new int[N];
    for (i = 0; i < N; i++)
    {
        mas[i] = rand() % 10;
    }
    for (int m = 0; m < N; m++)
    {
        cout << mas[m] << " ";
    }
    cout << "\n";
    for (i = 2; i < N; i += 2)
    {
        if (mas[i] < min1)
        {
            min1 = mas[i];
        }
    }
    cout << "минимальное число с четным индексом равно: ";
    cout << min1 << endl;
    cout << "______________________________________\n";
    cout << "#4\n";
    N = 8;
    int mas1[] = { 2, 4, 9, 5, 8, 10, 7, 70 };
    for (int m = 0; m < N; m++)
    {
        cout << mas1[m] << " ";
    }
    cout << "\n";
    int tmp = mas1[1];
    for (int i = 1; i < N - 1; i++) {
        if (mas1[i] > mas1[i - 1] && mas1[i] > mas1[i + 1])
            tmp = mas1[i];
    }
    cout << "Найти номер его последнего локального максимума: \n";
    cout << tmp << endl;
    cout << "______________________________________\n";
    cout << "#5\n";
    const int z = 8;
    int a1[z] = { 0, 1, 2, 3, 4, 2, 5, 6 };
    cout << "Массив: ";
    for (int m = 0; m < N; m++)
    {
        cout << a1[m] << " ";
    }
    cout << "\n ";
    cout << "Индексы одинаковых элементов: ";
    for (int i = 0, t = 0; t != 1; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j) {
                if (a1[i] == a1[j]) {
                    cout << i << " " << j << endl;
                    t = 1;
                }
            }
        }
    }
    return 0;
}