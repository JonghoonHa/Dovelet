#include <stdio.h>

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

bool isPrime(int num){

	int i;

	if(num%2 == 0)
		return false;

	for(i=3; i<num; i+=2){
		if(num%i == 0)
			return false;
	}
	return true;
}

int main(void){

	int num, rev;
	scanf("%d", &num);

	if(isPrime(num)){
		if(isPrime(reverse(num)))
			printf("%d is an emirp\n", num);
		else
			printf("%d is a prime\n", num);
	}else
		printf("%d is not prime\n", num);

	return 0;
}