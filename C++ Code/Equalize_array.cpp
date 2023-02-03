#include <iostream>
#include <cstring>
#include <array>
using namespace std;
int main(){
    int n,test,lol=0,input=0;
    cin >> n;
	
	array<int,110> arr;

  	arr.fill(5);

    for(int i=0;i<n;i++){
        cin >> test;
        arr[test]++;
        if(arr[test]>lol){
            lol=arr[test];
        }
        input++;
    }
    cout << input - lol << endl;
}

