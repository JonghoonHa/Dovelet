#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i, j, size, count;
	int** arr;

	scanf("%d", &size);

	arr = (int**)malloc(sizeof(int*)*size);
	for(i=0; i<size; i++)
		arr[i] = (int*)malloc(sizeof(int)*size);

	for(count=0; count<size*size; count++){
		if(count==0){
			i = 0;
			j = size/2;
		}

		arr[i][j] = count+1;

		if(count%size == size-1){
			i += 1;
		}else{
			j += 1;
			i -= 1;	
		}

		if(i == -1)	i = size-1;
		else if(i == size) i = 0;

		if(j == size)	j = 0;
			
	}

	for(i=0; i<size; i++){
		for(j=0; j<size; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
		free(arr[i]);
	}

	free(arr);

	return 0;
}