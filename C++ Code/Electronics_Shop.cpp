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
    int n,a,b;
    cin >> n >> a >> b;

    int arr[a+10],arr2[b+10];
    for(int i=0;i<a;i++){
        cin >> arr[i];
    }
    for(int i=0;i<b;i++){
        cin >> arr2[i];
    }

    sort(arr,arr+a);    sort(arr2,arr2+b);
    int max_limit=-1;
    for(int i=a-1;i>=0;i--){
        for(int j=b-1;j>=0;j--){
                if(arr2[j]+arr[i]>max_limit && arr2[j]+arr[i]<=n){
                    max_limit=arr2[j]+arr[i];
                }
        }
    }

    cout << max_limit << '\n';
}
