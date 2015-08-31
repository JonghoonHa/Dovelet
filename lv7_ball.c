#include <stdio.h>


int solve(int arr[][3], int row, int column){

	int i;
	int min;

	if(row == 2){
		arr[row][column] = 0;
		return 0;
	}
	else if(row == 0){
		min = arr[0][0];
		printf("%d ", min);
	}

	if(arr[row+1][column] > arr[row+1][column+1]){
		arr[row][column] = arr[row+1][column];
		solve(arr, row+1, column);
	}else{
		arr[row][column] = arr[row+1][column+1];
		solve(arr, row+1, column+1);
	}

	return 0;
}

int main(void){

	int i, j;

	int balls[3][3] = {0,};

	for(i=2; i>=0; i--){
		for(j=0; j<=i; j++)
			scanf("%d", &balls[i][j]);
	}

	for(i=0; i<6; i++)
		solve(balls, 0, 0);

	printf("\n");

	return 0;
}