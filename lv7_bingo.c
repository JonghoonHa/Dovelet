#include <stdio.h>

int main(void){

	int idx, i, j, p, q, temp, count = 0;
	int arr[5][5] = {0,};

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			scanf("%d", &temp);
			arr[i][j] = temp;
		}
	}

	for(idx=0; idx<25; idx++){

		scanf("%d", &temp);

		for(i=0; i<5; i++){
			for(j=0; j<5; j++){

				if(arr[i][j] == temp)	arr[i][j] = 0;
				else{
					count = 0;
					if(arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0 && arr[3][3] == 0 && arr[4][4] == 0 ) count++;
					if(arr[4][0] == 0 && arr[3][1] == 0 && arr[2][2] == 0 && arr[1][3] == 0 && arr[0][4] == 0 ) count++;

					for(p=0; p<5; p++){
						if(arr[p][0] == 0 && arr[p][1] == 0 && arr[p][2] == 0 && arr[p][3] == 0 && arr[p][4] == 0 ) count++;
						if(arr[0][p] == 0 && arr[1][p] == 0 && arr[2][p] == 0 && arr[3][p] == 0 && arr[4][p] == 0 ) count++;
					}
				}

			}

			if(count >= 3){
				printf("%d\n", idx+1);
				return 0;
			}
		}
	}

	return 0;
}