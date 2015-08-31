#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int row, column, i, j;

	scanf("%d %d", &row, &column);

	long long **arr = (long long**)malloc(sizeof(long long*) * row);

	for(i=0; i<row; i++){
		arr[i] = (long long*)malloc(sizeof(long long)*column);
	}

	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			if(i==0 || j==0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i-1][j] + arr[i][j-1];

			printf("%lld ", arr[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<row; i++)
		free(arr[i]);

	free(arr);
	
	return 0;
}