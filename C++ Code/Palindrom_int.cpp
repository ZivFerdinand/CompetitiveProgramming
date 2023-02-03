#include<iostream> 
using namespace std;
int itung=0; 

long long isPalindrome(long long n) 
{ 
	long long rev = 0; 
	for (long long i = n; i > 0; i /= 10) 
		rev = rev*10 + i%10; 

	return (n==rev); 
} 

void countPal(long long min, long long max) 
{ 
	for (long long i = min; i <= max; i++) 
		if (isPalindrome(i))
			itung++;
} 
 
int main() 
{ 
	long long n,m;
	cin >> n >> m;
	countPal(n, m); 
	
	cout << itung << endl;
	return 0; 
} 

