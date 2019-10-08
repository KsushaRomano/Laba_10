using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double N, p, i;
	p = 1;
	cout << "Введите N: ";
	cin >> N;
	for (i = 1; i <= N; i++) {
		p = p * (1 + i / 10);
	};
	cout << "Произведение равно: " << p;
}