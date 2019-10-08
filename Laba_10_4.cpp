using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, c, Ac;
	int N, i;
	Ac = 1;
	c = 1;
	cout << "Введите число А: ";
	cin >> A;
	cout << "Введите число N: ";
	cin >> N;
	for (i = 1; i <= N; i++) {
		Ac = Ac * A;
		c = c + Ac;
	}
	cout << "Сумма равна: " << c;
}