#include "Header.h"
#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");
	byte h, m, s;

	timestamp example(11, 10, 0);
	cout << "Изначальное время " << example << endl;

	cout << "Сколько добавить часов: "; cin >> h;
	cout << "Сколько добавить минут: "; cin >> m;
	cout << "Сколько добавить секунд: "; cin >> s;

	example.Add_Hours(h).Add_Minutes(m).Add_Seconds(s);

	cout << "Изменённое время " << example;
}

