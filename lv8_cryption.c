#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {false, true} bool;

int* genNum(int *arr, int n, int size){

	int i, j, k, count=0, result=0, *arr2;

	arr2 = (int*)malloc(sizeof(int) * (int)pow((float)n, size));
	
	for(k=0; k<n; k++){
		result = 0;
		result += arr[k];
		for(i=0; i<n; i++){
			if(i != 0)
				result /= 10;		
			result *= 10;
			result += arr[i];
			if(size == 3){
				for(j=0; j<n; j++){
					if(j != 0)
						result /= 10;
					
					result *= 10;
					result += arr[j];
					
					arr2[count++] = result;
				}
				result /= 10;
			}else{
				arr2[count++] = result;
			}
		}
	}
	
	return arr2;
}

bool count(int num1, int num2, int *arr, int n){

	if(check(num1 * (num2%10), arr, n, 3) && check(num1 * (num2/10), arr, n, 3) && check(num1 * num2, arr, n, 4))
		return true;
	else
		return false;	
}

int check(int num , int *arr, int n, int todo){

	int i;
	bool flag;


	if(num >= pow((float)10, todo))
		return 0;

	while(num>0){
		flag = false;
		for(i=0; i<n; i++){
			if(num%10 == arr[i]){
				flag = true;
				break;
			}
		}
		if(!flag)
			return 0;
		num /= 10;
	}
	return 1;
}

int main(void){

	int i, j, num, *arr, *num1, * num2, result=0;
	
	scanf("%d", &num);

	arr = (int*)malloc(sizeof(int)*num);

	for(i=0; i<num; i++)
		scanf("%d", &arr[i]);

	num1 = genNum(arr, num,  3);
	num2 = genNum(arr, num,  2);

	for(i=0; i<pow((float)num, 3); i++){
		for(j=0; j<pow((float)num, 2); j++){
			result += count(num1[i], num2[j], arr, num);
		}
	}

	printf("%d\n", result);

	return 0;
}