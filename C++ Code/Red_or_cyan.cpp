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

int main()
{
    int q;
    cin >> q;

    string s;
    int value, total;
    int divisibleByTwo;
    int foundZero;
    while(q--)
    {
        total = 0;
        foundZero = 0;
        divisibleByTwo = 0;
        cin >> s;
        for (int i = 0; i < s.size();i++)
        {
            value = s[i] - 48;

            total += value;
            if(!(value % 2))
                divisibleByTwo++;

            if(!value)
                foundZero++;
        }

        if(!total || (divisibleByTwo > 1 && !(total % 3) && foundZero))
        {
            cout << "red\n";
        }
        else
            cout << "cyan\n";
    }
}
/*

*/