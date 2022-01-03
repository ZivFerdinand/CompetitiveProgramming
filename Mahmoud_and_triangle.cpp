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

ll arr[100010];
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
   for (int i = 0; i < n - 2; i++)
      if (arr[i] + arr[i + 1] > arr[i + 2])
         {
             cout << "YES\n";
             return 0;
         }

    cout << "NO\n";
}

/*

*/