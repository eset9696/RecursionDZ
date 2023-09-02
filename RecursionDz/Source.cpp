#include <iostream>

using namespace std;

void elevator(int floor);
int factorial(int n);
int Power(int a, int n);
void Fibonacci(int number, int prev = 0, int curr = 1, int next = 1);

void main()
{
	setlocale(LC_ALL, "");
	int n, a, p;
	cout << "Введите количество элементов: "; cin >> n;
	//elevator(n);
	cout << "Введите число: "; cin >> a;
	cout << factorial(a) << endl;
	cout << "Введите степень числа: "; cin >> p;
	cout << Power(a, p) << endl;
	Fibonacci(n);
}

void Fibonacci(int number, int prev, int curr, int next)
{
	if (next == 1) cout << prev << " " << curr << " ";
	if (number == 2) return;
	cout << next << " ";
	Fibonacci(--number, curr, next, curr + next);
}

int Power(int a, int n)
{
	return n == 0 ? 1 : Power(a, n - 1) * a;
}

int factorial(int n)
{
	return n == 0 ? 1 : factorial(n - 1) * n;
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на  " << floor << " этаже\n";
	elevator(floor - 1);
}