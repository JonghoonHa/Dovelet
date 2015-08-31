#include <stdio.h>
#include <stdlib.h>

int main(void){

	int ppl, i, j;
	int winner = 0;
	int **arr;
	int *win;
	
	scanf("%d", &ppl);

	arr = (int**)malloc(sizeof(int*)*ppl);
	win = (int*)malloc(sizeof(int)*ppl);

	for(i=0; i<ppl; i++){

		arr[i] = (int*)malloc(sizeof(int)*ppl);
		win[i] = 0;

		for(j=0; j<ppl; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(i=0; i<ppl; i++){
		for(j=0; j<ppl; j++){

			if(arr[i][j] == arr[j][i]){
				if(i<j)
					win[i] += 1;
				else
					win[j] += 1;
			}
				
			else if(arr[i][j] > arr[j][i])
				win[i] += 1;
			
		}

		if(win[winner] < win[i])
			winner = i;
	}

	printf("%d\n", winner+1);

	for(i=0; i<ppl; i++)
		free(arr[i]);

	free(arr);
	free(win);

	return 0;
}