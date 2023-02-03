#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
    string s;
    int sLen, a1, a2, b1, b2, time = 0;
    cin >> sLen >> a1 >> b1 >> a2 >> b2;
    cin >> s;

    for (int i = 0; i < sLen; i++)
    {
        if(s[i]=='S' && b1 > b2)
            b1--, time++;
        else if(s[i]=='N' && b1 < b2)
            b1++, time++;
        else if(s[i]=='W' && a1 > a2)
            a1--, time++;
        else if(s[i]=='E' && a1 < a2)
            a1++, time++;

        if(a1==a2&&b1==b2)
        {
            cout << i+1;
            return 0;
        }
    }

    cout << -1;
}
