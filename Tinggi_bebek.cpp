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

int main()
{
    int arr[5];
    for (int i = 0; i < 3;i++)
        cin >> arr[i];

    sort(arr, arr + 3);

    cout << arr[0] << '\n'
         << arr[2] << '\n'
         << arr[1];
}

/*

*/
