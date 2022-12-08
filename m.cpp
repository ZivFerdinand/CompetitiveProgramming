#include<stdio.h>

int arr[400010] = {};
int n;
long long m;
long long suffix[400010] = {};

long long func()
{
	long long max = 0, sum = 0;
	int i = n, j = n, k = 0;
	while(i >= 0)
	{
		if(sum == m)
		{
			return sum;
		}
		else if(sum < m)
		{
			i--;
			k++;
			sum += (arr[i]*k);
		}
		else
		{
			k--;
			sum -= (suffix[i]-suffix[j]);
			j--;
		}

		if(sum > max && sum <= m)
		{
			max = sum;
		}
	}
	return max;
}

int main()
{
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	long long sum = 0;
	for(int i = n-1; i >= 0; i--)
	{
		sum += arr[i];
		suffix[i] = sum;
	}
	
	scanf("%lld", &m);
	long long hasil = func();
	
	printf("%lld\n", hasil);
	
	return 0;
}