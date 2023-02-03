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

    int arr[n+10];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }

    int x=1,arr2[n+10];
    for(int i=1;i<=n;i++){
        int found_at_index;
        for(int j=1;j<=n;j++){
            if(arr[j]==i){
                found_at_index=j;
                break;
            }
        }
        for(int j=1;j<=n;j++){
            if(arr[j]==found_at_index){
                arr2[x]=j;
                x++;
                break;
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout << arr2[i] << '\n';
    }
}