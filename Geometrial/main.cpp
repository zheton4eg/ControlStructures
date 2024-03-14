#include <iostream>
using namespace std;
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB
//#define PLUSMINUS
#define ROMBUS
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите кол-во звездочек: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_1

#ifdef TRIANGLE_2

	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_2

#ifdef TRIANGLE_3

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;


	}

#endif // TRIANGLE_3


#ifdef TRIANGLE_4

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";
		for (int j = 0; j <= i; j++)cout << "* ";

		cout << endl;
	}

#endif // TRIANGLE_4

#ifdef ROMB

	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = i; j < n / 2; j++)cout << " ";
		for (int j = 0; j < i; j++)cout << "/\\";
		cout << endl;
	}

	for (int i = 1; i <= n / 2; i++)
	{
		for (int j = 1; j < i; j++)cout << " ";
		for (int j = i; j <= n / 2; j++)cout << "\\/";


		cout << endl;
	}
	cout << endl;
#endif // ROMB
#ifdef PLUSMINUS

	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n / 2; i++)
		{
			cout << "+ - ";


		}
		if (n % 2 != 0)
			cout << "+";
		cout << endl;
	}

#endif // PLUSMINUS

#ifdef ROMBUS
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			if (n - 1 - j % n == i % n && i + j + 1 != n * 2)cout << "/";
			else cout << " ";
		}cout << endl;
	}

#endif // ROMBUS
	  

	
}




