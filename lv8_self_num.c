#include <stdio.h>

typedef enum {false, true} bool;

int d(int x){

	int sum = x;

	while(x>0){
		sum += x%10;
		x /= 10;
	}

	return sum;
}

int main(void){

	int i, result;
	bool arr[10000] = {0, };

	for(i=1; i<=10000; i++){

		result = d(i);

		if(result <= 10000)
			arr[result-1] = true;	

		if(arr[i-1] == false)
			printf("%d\n", i);
	}

	return 0;
}