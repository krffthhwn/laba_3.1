// Lab_03_1.cpp
// < Іванів Олександр Андрійович >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 9

#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	double x, y1, y2, A, B, c;

	cout << "X: ";
	cin >> x;

	A = 2 * pow(abs(x), 3);

	if (x <= -0, 1)
		B = 2 * pow(abs(x), 3) - (5 * cos(18 * x));

	if (-0,1 < x < 1,2)
		B = 2 * pow(abs(x), 3) - (atan(x + 2) / 5);

	if (x >= 1,2)
		B = 2 * pow(abs(x), 3) - (1 / tan(x + 18));

	y1 = A - B;
	
	cout << endl;
	cout << "1) y1 = " << y1 << endl;

	if (x <= -0, 1)
		    c = 2 * pow(abs(x), 3) - (5 * cos(18 * x));
	else
		if (-0, 1 < x < 1, 2)
			c = 2 * pow(abs(x), 3) - (atan(x + 2) / 5);
		else
			c = 2 * pow(abs(x), 3) - (1 / tan(x + 18));
	y2 = A - B;

	cout << "2) y2 = " << y2 << endl;
	cin.get();
	

	return 0;
}