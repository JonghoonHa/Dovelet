#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i, j, size;
	int** arr;

	scanf("%d", &size);

	arr = (int**)malloc(sizeof(int*)*size);

	for(i=0; i<size; i++){

		arr[i] = (int*)malloc(sizeof(int)*(i+1));

		for(j=0; j<i+1; j++){

			if(j == 0 || j == i) arr[i][j] = 1;
			else{
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}

			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}
	
	for(i=0; i<size; i++)
		free(arr[i]);
	free(arr);

	return 0;
}