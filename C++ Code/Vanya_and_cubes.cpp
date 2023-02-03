#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int arr[100000];

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n,cnt=1,i=2,add=2;
   	cin >> n;

   	arr[0]=0;
   	arr[1]=1;
   	while(true){
   		cnt+=add;
   		arr[i]=arr[i-1]+cnt;
   		if((arr[i])>n){
   			cout << i-1;
   			return 0;
   		}
   		add++;
   		i++;
   	}
}
/*
1 -> 1
2 -> 4
3 -> 10
4 -> 20
5 -> 35
*/