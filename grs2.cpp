#include<stdio.h>
#include<string.h>

int main()
{
	FILE *openFile;
	openFile = fopen("testdata.in","r");
	
	int t;
	fscanf(openFile,"%d",&t);
	for(int i=0;i<t;i++)
	{
		int k;
		char kosong;
		char s[1100]={};
		fscanf(openFile,"%d",&k);
		fscanf(openFile,"%c",&kosong);
		fscanf(openFile,"%[^\n]",&s);
		printf("Case #%d: %s\n",i+1,s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[i]=='0')
			{
				s[i]='O';
			}
			else if(s[i]=='1')
			{
				s[i]='I';
			}
			else if(s[i]=='3')
			{
				s[i]='E';
			}
			else if(s[i]=='4')
			{
				s[i]='A';
			}
			else if(s[i]=='5')
			{
				s[i]='S';
			}
			else if(s[i]=='6')
			{
				s[i]='G';
			}
			else if(s[i]=='7')
			{
				s[i]='T';
			}
			else if(s[i]=='8')
			{
				s[i]='B';
			}
		}
		for(int j=0;j<strlen(s);j++)
		{
			s[i]=s[i]-k;
			while(s[i]<'A')
			{
				int nambah = s[i]-k;
				s[i]=90+nambah;	
			}
		}
		printf("Case #%d: %s\n",i+1,s);
	}
	
	fclose(openFile);
}