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
    int arr[150],arr2[150],cnt=0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
    	cin >> arr[i] >> arr2[i];
    }
    for(int i=0;i<n;i++){
    	cnt+=count(arr2,arr2+n,arr[i]);
    }

    cout << cnt << '\n';
}