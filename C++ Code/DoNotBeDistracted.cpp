#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#define ll long long
using namespace std;

int main(){
    string s;
    int q, n;
    bool exist[100];
    cin >> q;

    while(q--)
    {
        cin >> n;
        cin >> s;

        memset(exist, false, sizeof exist);
        exist[(int)s[0]] = true;
        for (int i = 1; i < n;i++)
        {
            if(s[i]!=s[i-1] && exist[(int)s[i]])
            {
                exist[0] = true;
                cout << "NO\n";
                break;
            } 
            else if(s[i]!=s[i-1] && !exist[(int)s[i]])
                exist[(int)s[i]] = true;
        }

        if(!exist[0])
            cout << "YES\n";
    }
}	 

/*
10 3 5 1
*/
