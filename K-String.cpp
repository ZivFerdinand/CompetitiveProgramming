#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main()
{
    string s;
    int n, lastLoc = 0;
    cin >> n;
    cin >> s;
    //sort(s.begin(), s.end());
    char myData[50];
    map<char, int> myDataCounter = {};
    bool available[150];
    memset(available, false, sizeof available);
    for (int i = 0;i<s.size();i++)
    {
        if(available[(int) s[i]] == false)
        {
            available[(int)s[i]] = true;
            myData[lastLoc++] = s[i];
        }
        myDataCounter[s[i]]++;
    }
    for (int i = 0; i < lastLoc;i++)
    {
        if(myDataCounter[myData[i]]%n!=0)
        {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < lastLoc;j++)
        {
            for (int k = 0; k < myDataCounter[myData[j]] / n;k++)
                cout << myData[j];
        }
    }
}
/*
a^2 + b   = n => b = n - a^2
a	+ b^2 = m
*/
