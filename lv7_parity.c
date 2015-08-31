#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {false, true} bool;

int check(bool** arr, int n){
	int i, j, sum1=0, sum2=0, temp1, temp2;

	for(i=0; i<n; i++){
		temp1 = 0;
		temp2 = 0;
		for(j=0; j<n; j++){
			temp1 += arr[i][j];
			temp2 += arr[j][i];
		}
		sum1 += temp1%2;
		sum2 += temp2%2;
	}

	return sum1 + sum2;
}

int main(void)
{
	int i, j, n, temp, result;
	bool** arr;

	scanf("%d", &n);

	arr = (bool**)malloc(sizeof(bool*)*(n));

	for(i=0; i<n; i++){

		arr[i] = (bool*)malloc(sizeof(bool)*(n));
		memset(arr[i], 0, sizeof(bool)*(n));

		for(j=0; j<n; j++){
			scanf("%d", &temp);
			arr[i][j] = temp;
		}
	}

	result = check(arr, n);

	if(result == 0){

		printf("ok\n");
		return 0;

	}else{
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(arr[i][j] == 1)	arr[i][j] = 0;
				else	arr[i][j] = 1;

				result = check(arr, n);

				if(result == 0){
					printf("change bit (%d,%d)\n", i+1, j+1);
					return 0;
				}

				if(arr[i][j] == 1)	arr[i][j] = 0;
				else	arr[i][j] = 1;
			}
		}
	}

	printf("error\n");

	return 0;
}