#include<stdio.h>
int main()
{
    int q, n, cnt;
    long long sum=0,arr[2200];
	scanf("%d",&q);
	for(int k=1;k<=q;k++)
	{
        cnt = sum = 0;
        scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			sum=sum+arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]>sum)
			{
			    cnt=cnt+1;
			}
		}
		printf("Case #%d: %lld\n",k,sum);
		printf("%d\n",cnt);
		
	}
	
}