#include<stdio.h>
int main()
{
	long long int digit=0;
	long long int nilai[100090]={};
	long long int hasil=0;
	scanf("%lld", &digit);
	for(long long int i=0;i<digit;i++)
	{
		scanf("%lld",&nilai[i]);
	}
	long long int cari;
	scanf("%lld", &cari);

	for(long long int i=0;i<cari;i++)
	{
		long long int counter=0;
		long long int ada=0;
		scanf("%lld", &hasil);
		for(long long int j=0;j<digit;j++)
		{
			if(counter+nilai[j]<=hasil)
			{
				counter=counter+nilai[j];
				ada++;
			}
		}
		if(ada==0)
		{
			ada=-1;
		}
		printf("Case #%lld: %lld\n",i+1, ada);
	}
}