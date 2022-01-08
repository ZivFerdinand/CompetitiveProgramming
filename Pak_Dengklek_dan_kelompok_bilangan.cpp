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

int arr[10010];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n;i++)
    if(arr[i]<0)
        cout << arr[i] << '\n';

    for (int i = 0; i < n;i++)
    if(arr[i]==0)
        cout << arr[i] << '\n';

    for (int i = 0; i < n;i++)
    if(arr[i]>0)
        cout << arr[i] << '\n';
}

/*
88888
8aaa8
8a*a8
8aaa8
88888
*/
