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
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for (int i = 0; i <= max(n, m);i++)
    {
        for (int j = 0; j <= max(n, m);j++)
        {
            if(i*i + j == n && j*j + i == m)
                cnt++;
        }
    }
    cout << cnt;
}
