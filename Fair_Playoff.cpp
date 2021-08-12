#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <deque>
#define ll long long
using namespace std;

int main(){
    int arr[10], arr2[10];
    int n;
    cin >> n;

    while(n--)
    {
        for (int i = 0; i < 4;i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }

        sort(arr2, arr2 + 4);

        if(max(arr[0],arr[1])==arr2[2] || max(arr[0],arr[1])==arr2[3])
        {
            if(max(arr[2],arr[3])==arr2[2] || max(arr[2],arr[3])==arr2[3])
            {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
}	 

/*
10 3 5 1
*/
