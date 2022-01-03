#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
using namespace std;

int arr[200000] = {};

int main()
{
    int n, originalVal;
    cin >> n;

	originalVal = pow(2, n) - 1;
	n = originalVal;

	int space = 0;
    string temp;
    int q;

    while(n > 0)
    {
        for (int i = 0; i < (originalVal - n - space) / n;i++)
        {
			if(!i)
                temp = "", q = 0;
            temp += " ", q++;
        }

        int savee = 0;
        for (int i = 0; i < n; i++)
        {
            savee += q + 1;
            if(space)
                arr[savee]++;
        }

        n /= 2;

        space *= 2;
        space++;
    }

    cout << '\n';
    for (int i = 1; i < originalVal; i++)
    {
        cout << '*';
        for (int j = 0; j < arr[i]; j++)
            cout << '*';

        cout << '\n';
    }
    cout << "*\n";
}
/*
*******************************
 * * * * * * * * * * * * * * *
   *   *   *   *   *   *   *
       *       *       *
               *

*
**
*
***
*
**
*
****
*
**
*
***
*
**
*
*****
*
**
*
***
*
**
*
****
*
**
*
***
*
**
*

*/