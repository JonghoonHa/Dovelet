#include <stdio.h>

int main(void){
	
	int i,j, k, tempSum1, tempSum2, tempSum3, tempSum4, max = -1000;
	int arr[30][30] = {0, };

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			scanf("%d", &arr[i][j]);
			arr[i+10][j] = arr[i][j];
			arr[i+20][j] = arr[i][j];
			arr[i][j+10] = arr[i][j];
			arr[i][j+20] = arr[i][j];
			arr[i+10][j+10] = arr[i][j];
			arr[i+20][j+10] = arr[i][j];
			arr[i+10][j+20] = arr[i][j];
			arr[i+20][j+20] = arr[i][j];
		}
	}

	for(i=10; i<20; i++){
		for(j=10; j<20; j++){
			tempSum1 = 0;
			tempSum2 = 0;
			tempSum3 = 0;
			tempSum4 = 0;

			for(k=0; k<5; k++){
				tempSum1 += arr[i][j+k];
				tempSum2 += arr[i+k][j];
				tempSum3 += arr[i+k][j+k];
				tempSum4 += arr[i+k][j-k];
			}

			if(tempSum1 > max)	max = tempSum1;
			if(tempSum2 > max)	max = tempSum2;
			if(tempSum3 > max)	max = tempSum3;
			if(tempSum4 > max)	max = tempSum4;
		}
	}

	printf("%d\n", max);

	return 0;
}