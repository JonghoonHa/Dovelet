#include <stdio.h>

int main(void){

	int i, j, p, q, x1, x2, y1, y2, temp, count = 0;
	bool arr[1000][1000] = {0, };

	for(i=0; i<4; i++){

		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		//if(x1 > x2){
		//	temp = x1;
		//	x1 = x2;
		//	x2 = temp;
		//}

		//if(y1 > y2){
		//	temp = y1;
		//	y1 = y2;
		//	y2 = temp;
		//}

		for(p=x1-1; p<x2-1; p++){
			for(q=y1-1; q<y2-1; q++){
				arr[p][q] = true;
			}
		}
		
	}

	for(i=0; i<1000; i++){
		for(j=0; j<1000; j++){
			if(arr[i][j] == true)
				count++;
		}
	}

	printf("%d\n", count);

	return 0;
}