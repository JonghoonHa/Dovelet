#include <stdio.h>

int main(void){
	
	int i,j, tempSum1, tempSum2, tempMax1, tempMax2, max = 0;
	int arr[10][10] = {0, };

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(j=0; j<10; j++){
		tempSum1 = 0;
		tempSum2 = 0;
		for(i=0; i<10; i++){
			if(i<5){
				tempSum1 += arr[i][j];
				tempSum2 += arr[j][i];
			}else{

				if(i==5){
					tempMax1 = tempSum1;
					tempMax2 = tempSum2;
				}

				tempSum1 = tempSum1 - arr[i-5][j] + arr[i][j];
				tempSum2 = tempSum2 - arr[j][i-5] + arr[j][i];

				if(tempSum1 >= tempMax1)
					tempMax1 = tempSum1;
				if(tempSum2 >= tempMax2)
					tempMax2 = tempSum2;
			}
		}
		if(tempMax1 > max)
			max = tempMax1;
		if(tempMax2 > max)
			max = tempMax2;
	}

	printf("%d\n", max);

	return 0;
}