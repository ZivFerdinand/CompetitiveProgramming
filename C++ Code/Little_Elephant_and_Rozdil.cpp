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
    int n;
    cin >> n;

    ll arr[100010], arr2[100010];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    if(n==1)
    {
        cout << 1;
        return 0;
    }
    sort(arr2, arr2 + n);


    if(arr2[0] == arr2[1])
        cout << "Still Rozdil";

    else
        cout << 1 + (find(arr, arr + n, arr2[0]) - arr);
    
}
