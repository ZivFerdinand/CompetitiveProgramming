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
    string s[110];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n;i++)
    {
        cin >> s[i];
        for (int j = 0; j < m;j++)
        {
            if(s[i][j]!='-')
            {
                if(!(i%2))
                {
                    if(!(j%2))
                        s[i][j] = 'B';
                    else
                        s[i][j] = 'W';
                }
                else
                {
                    if(!(j%2))
                        s[i][j] = 'W';
                    else
                        s[i][j] = 'B';
                }
                
            }
        }
        cout << s[i] << '\n';
    }
}
