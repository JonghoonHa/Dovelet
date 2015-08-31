#include <stdio.h>

int main(void)
{
	int arr[3][4] = {0};
	int i, j;

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
}