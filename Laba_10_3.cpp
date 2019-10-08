using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, N, N2;
	N2 = 0;
	cout << "Введите значение N: ";
	cin >> N;
	for (i = 1; i <= N; i++) {
		N2 = N2 + (2*i - 1);
		cout << "Текущее значение суммы - " << N2 << endl;
	}
	cout << "N во 2 степени равно " << N2;
}