using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double i;
	double c;
	cout << "Введите стоимость 1 кг конфет: ";
	cin >> c;
	for (i = 1; i <= 10; i++) {
		cout << "Стоимость " << i / 10 << " кг конфет стоит " << (i * c / 10) << endl;
	};
}