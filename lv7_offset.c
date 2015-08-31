#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	int arr[5][5] = {0};
	char newArr[5][5];
	int i, j, p, q, row, column;
	char* temp = (char*)malloc(sizeof(char));

	for(i=0; i< 5; i++){
		for(j=0; j<5; j++){
			scanf("%d", &arr[i][j]);
			newArr[i][j] = '*';
		}
	}

	for(i=0; i< 5; i++){
		for(j=0; j<5; j++){

			short flag = 1;

			for(p=-1; p<2; p+= 2){
				row = i + p;
				if(row<=4 && row>=0){
					//printf("i: %d, j: %d, p: %d, q: %d\n", i, j, p, q);
					if(arr[i][j] >= arr[row][j]){		
						sprintf(temp, "%d", arr[i][j]);
						newArr[i][j] = temp[0];
						flag = 0;
						break;
					}
				}
			}

			if(flag){
				for(q=-1; q<2; q+=2){
					column = j + q;
					if(column<=4 && column>=0){
						if(arr[i][j] >= arr[i][column]){
							sprintf(temp, "%d", arr[i][j]);
							newArr[i][j] = temp[0];
							break;
						}
					}
				}
			}
		}
	}

	for(i=0; i< 5; i++){
		for(j=0; j<5; j++){
			printf("%c ", newArr[i][j]);
		}
		printf("\n");
	}

	return 0;
}