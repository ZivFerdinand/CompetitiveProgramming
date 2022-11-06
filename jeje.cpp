#include<stdio.h>

int main()
{
	long int n,t[1000]={},sum,count=0;
	long int ganjil[1000];
	long int genap[1000];
	long int count1=0;
	long int count2=0;
	scanf("%ld",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%ld",&t[i]);
		count++;
	}
	
	for (int i=0;i<count;i++)
	{
		if(t[i]%2==1)
		{
			ganjil[count1]=t[i];
			count1++;
		}
		else
		{
			genap[count2]=t[i];
			count2++;
		}
	}
	
	
	for (int i=0;i<count2;i++)
	{
		sum += genap[i];
	}
	
	if (count1%2==0)
	{
		for (int i=count1-1;i>=0;i--)
		{
			sum+= ganjil[i];
		}
	}
	else 
	{
		for (int i=count1-1;i>0;i--)
		{
			sum+= ganjil[i];
		}
	}
	
	printf("%ld\n",sum);
}