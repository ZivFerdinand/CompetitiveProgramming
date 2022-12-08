#include <stdio.h>

int main(){
	int testcase, sizeArray, max, result = 0, temp;
	scanf("%d", &testcase);
	for(int i = 0; i < testcase; i++){
		int check = 0;
		int temp = 0;
		int arr[400001] = {};
		scanf("%d", &sizeArray);
		int k = sizeArray;
		for(int j = 1; j <= sizeArray; j++){
			scanf("%d", &arr[j]);
		}
		scanf("%d", &max);
		for(int x = 1; x <= sizeArray; x++){
			for(int k = sizeArray; k > 0; k--){
				int a = x, b = k, sum = 0, temp = 0;
				while(a <= x + k - 1 && b > 0){
					if(sum + (arr[a] * b) > max){
						temp = sum;
						break;
					}
					else if(sum + (arr[a] * b) == max){
						temp = sum + (arr[a] * b);
						break;
					}
					else{
						sum = sum + arr[a] * b;
						a++;
						b--;
					}
				}
				// printf("(%d,%d) = %d\n", x, k, temp);
				if(result <= temp) result = temp;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}