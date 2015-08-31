#include <stdio.h>
#include <stdlib.h>

int main(void){

	int row, column, i, j;
	int **arr;
	int *test;

	scanf("%d %d", &column, &row);

	arr = (int**)malloc(sizeof(int*) * row);
	test = (int*)malloc(sizeof(int) * column);

	for(i=0; i<column; i++)
		test[i] = 0;

	for(i=0; i<row; i++){
		arr[i] = (int*)malloc(sizeof(int) * column);

		for(j=0; j<column; j++){
			scanf("%d", &arr[i][j]);

			if(arr[i][j] != 1)
				test[j] += 1;
		}
	}

	for(i=0; i<column; i++){
		if(test[i] == 0){
			printf("yes\n");
			return 0;
		}
	}
	printf("no\n");
	return 0;
	

	return 0;
}