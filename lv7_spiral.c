#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i=0, j=-1, p, q, row, size, count = 1, flag = 0;
	int** arr;

	scanf("%d", &size);
	row = size;
	arr = (int**)malloc(sizeof(int*)*row);
	for(p=0; p<row; p++)
		arr[p] = (int*)malloc(sizeof(int)*row);

	while(1){
		for(p=0; p<2; p++){
			if(count == 1) p++;

			for(q=0; q<size; q++){

				switch(flag){
				case 0:
					j++;
					break;
				case 1:
					i++;
					break;
				case 2:
					j--;
					break;
				case 3:
					i--;
					break;
				}

				arr[i][j] = count++;

				if(count > row*row){
					flag = 4;
					break;
				}
				
			}

			if(flag == 4)	break;
			else
				flag = (flag+1)%4;
		}
		if(flag == 4)	break;

		size--;
	}
	

	for(i=0; i<row; i++){
		for(j=0; j<row; j++)
			printf("%5d", arr[i][j]);		
		printf("\n");
		free(arr[i]);
	}
	free(arr);

	return 0;
}