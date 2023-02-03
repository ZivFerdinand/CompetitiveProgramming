#include <iostream>
using namespace std;
int main()
{
	int i, j, k, l, m, n, o, p, q, r, s;
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		for (j = n; j >= i; j--)
		{
			if (i == 0 || j == n)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i == 0 && j == i)
			{
				for (p = 1; p <= n; p++)
				{
					cout << "*";
				}
			}
		}
		for (k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}for (j = n; j >= i; j--)
		{
			if (i == 0 || j == n)
			{
				//cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		if(i>0)
			cout << '*';
		cout << "\n";
	}
	for (l = n; l >= 1; l--)
	{
		for (m = n; m >= l; m--)
		{
			if (l == 1 || m == n)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (l == 1 && m == 1)
			{
				for (q = 0; q <= n; q++)
				{
					cout << "*";
				}
			}
		}
		
		cout << " ";
		for (o = (2 * l - 1); o >2; o--)
		{
			cout << "*";
		}
		for (m = n; m >= l; m--)
		{
			if (l == 1 || m == n)
			{
				//cout << "*";
			}
			else
			{
				cout << " ";
			}
			// if (l == 1 && m == 1)
			// {
			// 	for (q = 0; q <= n; q++)
			// 	{
			// 		cout << "*";
			// 	}
			// }
		}
		if(l>1)
		cout << " *";
		cout << "\n";
	}
}