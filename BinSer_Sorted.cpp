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

int binSer(int l, int r, int arr[], int isBeingSearched)
{
    if(l>r)
        return -1;
    int med = (l + r) / 2;
    if (arr[med] == isBeingSearched)
    {
        return med;
    }
    else if (arr[med] > isBeingSearched)
        return binSer(l, med - 1, arr, isBeingSearched);
    else if (arr[med] < isBeingSearched)
        return binSer(med + 1, r, arr, isBeingSearched);
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
    int q;
    cin >> q;

    int x;
    while(q--)
    {
        cin >> x;
        int q = binSer(0, n - 1, arr, x);

        while(arr[q]==arr[q-1] && q>0)
            q--;
        cout << q << '\n';
    }
}

/*

*/
