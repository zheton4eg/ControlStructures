#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �����: "; cin >> n;

	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1) ? "* " : "  ");
		}
		cout << endl;
	}

}

