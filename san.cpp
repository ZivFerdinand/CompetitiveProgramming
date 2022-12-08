#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[400050];
	long long m;

	long long maxx = 0, sum;
    int step;
    for (int i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%lld", &m);

	for (int i = 0; i < n;i++)
	{
		for (int j = i; j < n;j++)
		{
			step = j - i + 1;
			sum = 0;

			int berhasil = 1;
			for (int k = i; k <= j;k++)
			{
				if (sum + (arr[k] * step) > m)
				{
					berhasil = 0;
					break;
				}
				sum += (arr[k] * step--);
			}

			if(sum>m)
			{
				break;
			}
			// if (berhasil && sum <= maxx)
			// 	break;

			if (sum > maxx)
			{
				maxx = sum;
			}
		}
	}

	printf("%lld\n", maxx);
}