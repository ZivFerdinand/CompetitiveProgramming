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

    int a, b, c, cnt;
    while(q--)
    {
        cin >> a >> b >> c;

        if(b>a)
            swap(a, b);

        if(!c)
            cout << 0;
        if(a==c || b==c)
        {
            cout << 1;
        }
        else if(a<c && b<c)
        {
            cout << -1;
        }
        else
        {
            if(a%c == b)
            {
                cout << 2;
            }
            else if(!(c%b))
            {
                cout << c / b * 2;
            }
            else
            {
                cout << -1;
            }
        }

        cout << '\n';
    }
}
/*

5 2 -> 4 (4) isi penuh 2, buang ke 5, isi penuh 2, buang ke 5
5 2 -> 3 (2) isi penuh 5, buang ke 2
5 2 -> 1 (4) isi penuh 5, buang ke 2, kosongin 2, buang ke 2

7 2 -> 3 (4) isi penuh 7, buang ke 2, ksongi 2, buang ke 2

7 3 -> 4 (2)
isi 7 buang ke 3

*/