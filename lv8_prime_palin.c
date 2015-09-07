#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef enum{false, true} bool;

int reverse(int num){

	int temp=0;

	while(num > 0){
		temp *= 10;
		temp += num%10;
		num /= 10;
	}
	
	return temp;
}

bool isPrime(int num, int* arr){

	int i=0, j=0;

	while(arr[i]>0){

		if(num%arr[i] == 0){
			if(num == arr[i])
				return true;
			else
				return false;
		}
		i++;
	}
	arr[i] = num;
	
	
	return true;
}

//bool isPrime(int num){
//
//	int i;
//
//	if(num%2 == 0)
//		return false;
//
//	for(i=3; i<num; i+=2){
//		if(num%i == 0)
//			return false;
//	}
//	return true;
//}

int main(void){

	int a, b, i, *arr;

	scanf("%d %d", &a, &b);

	arr = (int*)malloc(sizeof(int)*(b-a));

	//arr[0] = 3;	arr[1] = 5;	arr[2] = 7;
	//arr[3] = 11;	arr[4] = 13;	arr[5] = 17;
	//arr[6] = 19;	arr[7] = 23;	arr[8] = 29;
	//arr[9] = 31;	arr[10] = 37;	arr[11] = 41; //43 , 47 , 53 , 59 , 61 , 67 , 71 , 73 , 79 , 83 , 89 , 97 , 
	//arr[12] = 43;	arr[13] = 47;	arr[17] = 53;
	//arr[15] = 59;	arr[16] = 61;	arr[20] = 71;
	//arr[18] = 73;	arr[19] = 79;	arr[23] = 83;
	//arr[21] = 89;	arr[22] = 97;	arr[26] = 101;

	for(i=3; i<a; i+=2){
		isPrime(i, arr);
	}

	if(a%2 == 0)
		a += 1;

	for(i=a; i<=b; i+=2){

		if(reverse(i) == i){
			if(isPrime(i, arr))
				printf("%d\n", i);
		}
	}

	free(arr);

	return 0;
}