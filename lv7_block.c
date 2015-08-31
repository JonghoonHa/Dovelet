#include <stdio.h>

int main(void){
	
	int i, j, row, column, temp;
	int sum[3][3] = {0,};

	for(i=0; i<9; i++){
		row = i/3;
		for(j=0; j<9; j++){
			column = j/3;
			scanf("%d", &temp);

			sum[row][column] += temp;
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
			printf("%d\n", sum[i][j]);
	}

	return 0;

}