//PascalTriangle
#include <iostream>
using namespace std;
const int width = 8;
typedef unsigned long int DataType;
void main()
{
	setlocale(LC_ALL, "");
	int h;
	cout << "������� ������ ������������: "; cin >> h; h--;
	for (int i = 0; i < h; i++)
	{
		cout.width(width/2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;
	DataType nf = 1;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		DataType mf = 1;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width / 2);
			cout << "";
		}
		cout.width(width);
		cout << 1 ;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			DataType nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)nmf *= nm;
			cout.width(width);
			cout << nf / mf / nmf;
		}cout << endl;
	}
		 
}