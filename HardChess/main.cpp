//HardChess
#include <iostream>
using namespace std;
//#define HardChess
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
#ifdef HardChess

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (k % 2 == i % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}


	}

#endif // HardChess

	for (int i = 1; i <= n+n; i++)
	{
		
		for (int j = 1; j <=n+n; j++)
		{
			cout << "* ";
			if (i > n, j<n)
				cout << "  ";

			
		}cout << endl;
	}
	
}