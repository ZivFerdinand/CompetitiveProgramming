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
#define ld long double
using namespace std;

int arr[1050];
void start()
{
    int cnt = 0;
    int i = 1;
    while(cnt<=1000)
    {
        if(i%3&&i%10!=3)
        {
            cnt++;
            arr[cnt] = i;
        }
        i++;
    }
}

int main()
{
    start();
    int q;
    cin >> q;

    while(q--)
    {
        int x;
        cin >> x;
        cout << arr[x] << '\n';
    }
}

/*

*/