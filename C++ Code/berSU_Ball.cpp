#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int arr[200],arr2[200];
   	bool used[200]={};
   	int n,m,cnt=0;
   	
   	cin >> n;
   	for(int i=0;i<n;i++)
   		cin >> arr[i];
   	cin >> m;
   	for(int i=0;i<m;i++)
   		cin >> arr2[i];

   	sort(arr,arr+n);
   	sort(arr2,arr2+m);

   	for(int i=m-1;i>=0;i--){
   		for(int j=n-1;j>=0;j--){
   			if(abs(arr2[i]-arr[j])<2 && !used[j]){
   				used[j]=true;
   				cnt++;
   				break;
   			}
   		}
   	}
   	cout << cnt << '\n';
}
/*



*/