#include <iostream>
using namespace std;
int main(){
    long long arr[6];
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }
    
    int cnt=0;
    for(int i=0;i<4;i++){
        if(arr[i]){
            for(int j=i+1;j<4;j++){
                if(arr[i]==arr[j]){
                    arr[j]=0;
                    cnt++;
                }
            }
            arr[i]=0;
        }
    }
    cout << cnt << endl;
    return 0;
 
}