#include <stdio.h>

int main(void){
	int arr[5][5] = {0};
	int i, j;

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			scanf("%d", &arr[i][j]);
		}
		//printf("\n");
	}

	for(i=0; i<5; i++){
		int rest = 0;
		int value;
		for(j=0; j<5; j++){
			int temp = arr[i][j];

			if(temp < 0)
				temp  *= (-1);

			if(i == j)
				value = temp;
			else
				rest += temp;
		}

		if(value < rest){
			printf("no\n");
			return 0;
		}
	}

	printf("yes\n");

	return 0;	
}