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
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;

	}

	else
	{
		cout << " �� ����� �������" << endl;

	}
#endif

#ifdef WHILE_1
	int i = 0; //������� ����� (loop counetr)
	int n;     //����������� �������� (number of iteration)
	cout << "������� ����������� ��������:"; cin >> n;
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