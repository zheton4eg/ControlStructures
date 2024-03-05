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
		if (key == 'w')cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "Вправо" << endl;
		else if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == 13)cout << "Огонь" << endl;
		else if (key == 27) cout << "Выход" << endl;
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
		case UpArrow:cout << "Вперед" << endl; break;
		case 's':
		case 'S':
		case LeftArrow:cout << "Влево" << endl; break;
		case 'a':
		case 'A':
		case DownArrow:cout << "Вниз" << endl; break;
		case 'd':
		case 'D':
		case RightArrow:cout << "Вправо" << endl; break;
		case ' ':cout << "Прыжок" << endl; break;
		case Enter:cout << "Стрелять" << endl; break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default: cout << "ERROR" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER2


 }