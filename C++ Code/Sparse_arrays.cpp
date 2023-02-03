#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    string arr[n+5];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    int q;
    cin >> q;
    
    string s;
    while(q--){
        int cnt=0;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s==arr[i]){
                cnt++;
            }
        }
        cout << cnt <<'\n';
    }
}