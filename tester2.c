#include<stdio.h>

int main()
{
	double sum = 0, count = 0, N;
	
	while(true){
		scanf("%lf", &N);
		sum += N;

		if(!N && !count){
            printf("Error\n");
		}
        else
        {
			printf("%lf\n", sum/count);
			break;
        }
		count++;
	}
}