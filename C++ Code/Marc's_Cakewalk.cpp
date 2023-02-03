#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    ll arr[n+10];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int j=0;
    ll total=0;
    for(int i=n-1;i>=0;i--){
        total+=pow(2,j)*arr[i];
        j++;
    }
    cout << total << '\n';
}