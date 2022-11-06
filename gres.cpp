#include<stdio.h>
int main()
{
	int n;
	long long int a[100010];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++)
	{
		long long int x;
		scanf("%lld",&x);
		long long int sum=0;
		long long int allSum[100010]={};
		for(int j=0;j<n;j++)
		{
			sum+=a[j];
			allSum[j]=sum;
		//	printf("ini %d\n",allSum[j]);	
		}
		for(int j=0;j<n;j++)
		{
			if(allSum[j]>x || j==n-1) 
			{
				printf("Case #%d: %d\n",i+1,j);
				break;
			}
		}
	}
	
	
}