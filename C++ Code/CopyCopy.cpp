#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

ll arr[100010];
int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q;
   	cin >> q;

   	int n,cnt;
   	while(q--){
   		cin >> n;
   		cnt=0;
   		for(int i=0;i<n;i++)
   			cin >> arr[i];
   		sort(arr,arr+n);
   		for(int i=1;i<n;i++)
   			if(arr[i]>arr[i-1])
   				cnt++;
   		cout << cnt+1 << '\n';
   	}
}
/*


*/