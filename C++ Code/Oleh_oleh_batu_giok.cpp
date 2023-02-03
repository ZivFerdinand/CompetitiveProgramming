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

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int arr[100010];
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    bool acc = true;
    for (int i = 0; i < n;i++)
    {
        if(i)
            if(arr[i]==arr[i-1])
            {
                acc = false;
                break;
            }
    }

    if(findGCD(arr, n) != 1)
        acc = false;

    (acc) ? cout << "LAYAK\n" : cout << "TIDAK LAYAK\n";
}
/*
0 1 2 3 4   = 5
0 1 2 3 4 5 = 6
*/