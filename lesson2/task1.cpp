#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;

	cout << "Введите длину конверта a:";
	cin >> a;
	cout << "Введите ширину конверта b:";
	cin >> b;
	cout << "Введите длину открытки c:";
	cin >> c;
	cout << "Введите ширину открытки d:";
	cin >> d;

	if (c <= a - 2 && d <= b - 2 || d <= a - 2 && c <= b - 2)
		cout << "Отрытка войдет";
	else 
		cout << "Открытка не войдет";
}
