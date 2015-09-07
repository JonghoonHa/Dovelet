#include <stdio.h>

typedef enum{false, true} bool;

int reverse(int num){

	int temp=0;

	while(num > 0){
		if(num%10 == 0)
			return 0;

		temp *= 10;
		temp += num%10;
		num /= 10;
	}
	
	return temp;
}

int clock(int num){
	
	int arr[4], min = 9999, temp, i, j;

	num = reverse(num);

	for(i=0; i<4; i++){
		arr[i] = num%10;
		num /= 10;
	}

	for(i=0; i<4; i++){

		temp = 0;

		for(j=i; j<i+4; j++){

			if(arr[j%4] == 0){
				return 0;
			}
			temp *= 10;
			temp += arr[j%4];
		}

		if(min > temp)
			min = temp;
	}
	return min;
}

int* apart(int num){

	int arr[4], i;

	for(i=0; i<4; i++){
		arr[i] = num%10;
		num /= 10;
	}

	return arr;
}

int main(void){

	int num[4], clockNum, count = 1, i;
	bool flag = true;

	scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);

	clockNum = clock(num[0]*1000 + num[1]*100 + num[2]*10 + num[3]);

	for(i=1111; i<clockNum; i++){

		if(clock(i) == i)
			count++;	
	}

	printf("%d\n", count);

	return 0;
}