#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

//#define FOR
//#define WHILE
//#define factorial 
//#define exponentiation
//#define fibonachi5
//#define Shooter
//#define FACTORIAL2
//#define ASCII
//#define FIBONACHI
//#define POWER
//#define FIBONACHI2
//#define SIMPLEX_NUMBERS
//#define MULTIPLICATIOM_TABLE
//#define PIFAGOR
//#define GEOMETRIAL

int main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE
	int i = 0; //счЄтчик цикла
	int n;     //кол-во итераций
	cout << "¬ведите кол-во итераций: "; cin >> n;
	while (i < n)
	{
		cout << "HELLO\n";
		i++;
	}
#endif // WHILE

#ifdef FOR
	int n;
	cout << "¬ведите кол-во итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;

#endif // FOR

#ifdef factorial
	int i,
		fact = 1, n;
	cout << "¬ведите число: "; cin >> n;
	for (
		i = 1;
		i <= n;
		i++
		)
	{
		fact *= i;
	}
	cout << "‘акториал числа равен: " << fact << endl;
#endif // factorial

#ifdef exponentiation
	int i, x, a, b;

	cout << "¬ведите основание и показатель степени: "; cin >> a >> b;
	x = a;
	for (
		i = 1;
		i < b;
		i++
		)

		x *= a;//x=x*a

	cout << "¬озведение в степень равно: " << x;
	return 0;
#endif // exponentiation



#ifdef fibonachi5

	int n, i, a, b, c;
	a = 0; b = 1; c = -1; i = 0; n = 0;

	cout << "¬ведите число дл€ р€да ‘иббоначи: "; cin >> n;

	while (i < n)
	{
		a = b;
		b = c;
		c = a + b;
		i++;

		cout << -c << " ";
	}

#endif // fibonachi5





#ifdef Shooter
	int a = _getch();



	switch (a)
	{
	case 'a': cout << " влево " << endl; break;
	case 's': cout << " вниз " << endl; break;
	case 'd': cout << " вправо " << endl; break;
	case 'w': cout << " вверх " << endl; break;
	case ' ': cout << " прыжок " << endl; break;
	case '1': cout << " сменить оружие " << endl; break;
	case '`': cout << " меню " << endl; break;
	case 'e': cout << " стрел€ть " << endl; break;

	default:cout << "Error" << endl;


	}

#endif // Shooter

#ifdef FACTORIAL2

	double n;
	cout << "¬ведите число: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
	main();
	return 0;
#endif // FACTORIAL2

#ifdef POWER

	double a;
	int n;
	double N = 1;

	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}

	for (int i = 0; i < n; i++)
	{
		N *= a;
		cout << N << endl;
	}


#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";

	}
#endif // ASCII


#ifdef FIBONACHI

	int n;
	cout << "¬ведите предельное число: "; cin >> n;


	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACHI

#ifdef SIMPLEX_NUMBERS

	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	int simplex_counter = 0;
	time_t start = clock();
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}

		if (simple)cout << (simplex_counter++, i) << "\t";
	}
	time_t end = clock();
	cout << endl;
	cout << "Amouth of simplex numbers: " << simplex_counter << endl;
	cout << "Calculated by: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
#endif // SIMPLEX_NUMBERS


#ifdef MULTIPLICATIOM_TABLE

	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
	}
#endif // MULTIPLICATIOM_TABLE

#ifdef PIFAGOR
	int q;
	for (int i = 1; i <= 9; i++)
	{
		if (i <= 9)
			cout << "\n";
		for (int j = 1; j <= 9; j++)


		{


			if (j * i < 10)cout << j * i << "  ";
			q = j * i;

			if (j * i > 9)cout << q << " ";

		}

	}
#endif // PIFAGOR

	

#ifdef GEOMETRIAL


	int a;

	cout << "¬ведите размер фигуры: "; cin >> a;


	for (int k = 1; k <= a; k++)
	{
		if (k <= a)
			cout << "\n";
		for (int l = 1; l <= a; l++)

		{
			if (k * l >= 1)cout << "* ";
		}
	}
	cout << endl;


	for (int i = 1; i <= a; i++)
	{
		if (i <= a)
			cout << "\n";
		for (int j = 1; j <= i; j++)

		{
			if (j * i >= 1)cout << "* ";

		}
	}
	cout << endl;

	for (int z = 1; z <= a; z++)
	{
		if (z <= a)
			cout << "\n";
		for (int x = a; x >= z; x--)

		{
			if (x * z >= 1)cout << "* ";
		}
	}
	cout << endl;



#endif // GEOMETRIAL



}

