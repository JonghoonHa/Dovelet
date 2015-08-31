#include <stdio.h>
#include <stdlib.h>

int main(void){

	int R, S, i, j;
	int** arr;

	scanf("%d %d", &R, &S);

	arr = (int**)malloc(sizeof(int*)*R);
	for(i=0; i<R; i++)
		arr[i] = (int*)malloc(sizeof(int)*R);

	for(j=0; j<R; j++){
		for(i=0; i<j+1; i++){
			//if(i == 0 && j == 0)	arr[i][j] = S++;

			arr[i][j] = S++;

			if(S == 10) S = 1;
		}
	}

	for(i=0; i<R; i++){
		for(j=0; j<R; j++){
			if(arr[i][j] < 10 && arr[i][j] > 0)	
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