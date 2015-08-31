#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	int a, b, k, r, s, p, t, i, j, count = 0, num = 0, idx;
	int** arr;

	scanf("%d %d %d", &a, &b, &k);

	arr = (int**)malloc(sizeof(int*)*a);
	for(i=0; i<a; i++){
		arr[i] = (int*)malloc(sizeof(int)*b);
		memset(arr[i], 0, sizeof(int)*b);
	}

	for(idx=0; idx<k; idx++){

		scanf("%d %d %d %d", &r, &s, &p, &t);
		
		p = p/2;

		if(t == 1)	num++;
		else	t = -1;

		if(p == 0) arr[r-1][s-1] += t;
		else{
			for(i=r-p; i<=r+p; i++){
				for(j=s-p; j<=s+p; j++){
					if(i-1 < 0 || i-1>= a || j-1<0 || j-1>=b)
						continue;
					else
						arr[i-1][j-1] += t;
				}
			}
		}
	}

	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			if(arr[i][j] == num)
				count++;
		}
	}

	printf("%d\n", count);

	return 0;

}