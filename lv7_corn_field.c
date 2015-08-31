#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i, j, p, q, num, n, b, k, low, max;
	int** arr; 
	//int** sub;

	scanf("%d %d %d", &n, &b, &k);

	arr = (int**)malloc(sizeof(int*)*n);
	//sub = (int**)malloc(sizeof(int*)*b);

	for(i=0; i<n; i++){

		arr[i] = (int*)malloc(sizeof(int)*n);
		//if(i<b)
		//	sub[i] = (int*)malloc(sizeof(int)*b);

		for(j=0; j<n; j++){
			scanf("%d", &num);
			arr[i][j] = num;
		}
	}

	for(num=0; num<k; num++){
		max = 0;
		low = 250;

		scanf("%d %d", &p, &q);

		for(i=p-1; i<p+b-1; i++){
			for(j=q-1; j<q+b-1; j++){

				if(i<0 || i>=n || j<0 || j>=n)
					continue;
				else{
					if(arr[i][j] < low)	low = arr[i][j];
					if(arr[i][j] > max)	max = arr[i][j];
				}
			}
		}

		printf("%d\n", max - low);
	}

	return 0;
}