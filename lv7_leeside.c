#include <stdio.h>
#include <stdlib.h>

int main(void){

	int R, S, i, j;
	int** arr;

	scanf("%d %d", &R, &S);

	arr = (int**)malloc(sizeof(int*)*R);
	for(i=0; i<R; i++){
		arr[i] = (int*)malloc(sizeof(int)*R);
		for(j=0; j<R; j++)
			arr[i][j] = -1;
	}

	for(j=0; j<R; j++){
		for(i=j; i>=0; i--){
			
			if(i == j)	arr[i][j] = S++;
			else
				arr[i][j] = (arr[i][j-1] + arr[i+1][j])%10;

			if(S == 10)	S = 1;
		}
	}

	for(i=0; i<R; i++){
		for(j=0; j<R; j++){
			if(arr[i][j] < 10 && arr[i][j] > -1)	
				printf("%d ", arr[i][j]);
			else
				printf("  ");
		}
		printf("\n");
		free(arr[i]);
	}
	free(arr);

	return 0;
}