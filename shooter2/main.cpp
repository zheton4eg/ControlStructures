#include <iostream>
#include <conio.h>
using namespace std;
#define Escape 27
#define Enter 13
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77
//#define Shooter1
//#define Shooter2
void main()
{
	setlocale(LC_ALL, "");
#ifdef Shooter1
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w')cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "������" << endl;
		else if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == 13)cout << "�����" << endl;
		else if (key == 27) cout << "�����" << endl;
		else if (key != -32)cout << "ERROR" << endl;

	} while (key != Escape);
#endif // Shooter1

#ifdef SHOOTER2
	char key;
	do {
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w':
		case 'W':
		case UpArrow:cout << "������" << endl; break;
		case 's':
		case 'S':
		case LeftArrow:cout << "�����" << endl; break;
		case 'a':
		case 'A':
		case DownArrow:cout << "����" << endl; break;
		case 'd':
		case 'D':
		case RightArrow:cout << "������" << endl; break;
		case ' ':cout << "������" << endl; break;
		case Enter:cout << "��������" << endl; break;
		case Escape:cout << "�����" << endl;
		case -32:break;
		default: cout << "ERROR" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER2


 }