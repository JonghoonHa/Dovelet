#include <stdio.h>
#include <math.h>

typedef enum{false, true} bool;

long long reverse(long long num){

	long long temp=0;
	
	if(num%10==0)
		return 0;
	while(num > 0){
		temp *= 10;
		temp += num%10;
		num /= 10;
	}
	
	return temp;
}

long long change(int num, int n){
	long long result = 0;
	int count=0;

	while(num>0){
		result += (num%n) * pow((float)10, count);
		num /= n;
		count++;
	}

	return result;	
}

int main(void){

	int i;
	long long temp;

	for(i=1; i<100000; i++){

		temp = change(i,2);
		if(temp == reverse(temp))
			printf("%d\n", i);
	}

	return 0;
}