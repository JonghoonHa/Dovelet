#include <stdio.h>

int main(void){

	int i, j, p, q, b, d, max, sum;
	int arr[5][5] = {0,};
	int maxPt[4] = {0,};

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(p=0; p<5; p++){
		for(q=0; q<5; q++){

			if(p==0 && q ==0)	max = 0;

			for(b=p; b<5; b++){
				for(d=q; d<5; d++){

					sum = 0;

					for(i=p; i<=b; i++){			
						for(j=q; j<=d; j++){
					
							sum += arr[i][j];	

						}//j
					}//i

					if(max < sum){	
						max = sum;
						maxPt[0] = p+1;	maxPt[1] = q+1;
						maxPt[2] = b+1;	maxPt[3] = d+1;
					}

				}//d
			}//b

		}
	}

	printf("%d\n", max);
	printf("%d %d %d %d\n", maxPt[0], maxPt[1], maxPt[2], maxPt[3]);

	return 0;
}