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
    int k;
    cin >> k;
    int arr[50];
    for (int i = 0; i < 12;i++)
        cin >> arr[i];

    sort(arr, arr + 12);
    reverse(arr, arr + 12);

    int cnt = 0, i = 0;
    while(cnt<k && i < 12)
    {
        cnt += arr[i];
        i++;
    }

    (cnt < k) ? cout << -1 : cout << i;
}
/*
a^2 + b   = n => b = n - a^2
a	+ b^2 = m
*/
    