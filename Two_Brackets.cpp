#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
using namespace std;

int main(){
    int aOpen = 0, aClose = 0, bOpen = 0, bClose = 0, cnt = 0;
    int n;
    cin >> n;

    string s;
    while(n--)
    {
        cin >> s;
        cnt = 0;
        aOpen = 0, aClose = 0, bOpen = 0, bClose = 0;
        for (int i = 0; i < s.size();i++)
        {
            if(s[i] == '(')
                aOpen++;
            else if(s[i] == ')')
            {
                if(aOpen)
                {
                    aOpen--;
                    cnt++;
                }
            }
            else if(s[i] == '[')
                bOpen++;
            else
            {
                if(bOpen)
                {
                    bOpen--;
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }
}
/*

*/