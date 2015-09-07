#include <stdio.h>

typedef enum{false, true} bool;

int gcd(int a, int b){

	if(b == 0)
		return a;
	else
		gcd(b, a%b);
}

bool isPrime(int num){

	int i;

	if(num%2 == 0)
		return false;

	for(i=3; i<num; i+=2){
		/*if(gcd(num, i) != 1)*/
		if(num%i == 0)
			return false;
	}
	return true;
}
int main(void){

	int even, i;

	scanf("%d", &even);

	for(i=3; i<even; i+=2){
		if(isPrime(i) && isPrime(even-i)){
			printf("%d = %d + %d\n", even, i, even-i);
			return 0;
		}
	}

	printf("Goldbach's conjecture is wrong.");

	return 0;
}