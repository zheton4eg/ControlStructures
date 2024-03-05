#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define IF_ELSE 
 //#define WHILE_1
void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef IF_ELSE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;

	}

	else
	{
		cout << " На улице холодно" << endl;

	}
#endif

#ifdef WHILE_1
	int i = 0; //счетчие цикла (loop counetr)
	int n;     //колличество итераций (number of iteration)
	cout << "Введите колличество итераций:"; cin >> n;
	while (i++ < n)
	{
		cout << i << "Hello World\n";
	}
#endif // WHILE_1

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}