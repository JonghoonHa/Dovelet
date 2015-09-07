#include <stdio.h>


int reverse(int num){

	int temp=0;

	while(num > 0){
		temp *= 10;
		temp += num%10;
		num /= 10;
	}

	return temp;
}

int main(void){

	int a, b, sum;

	scanf("%d %d", &a, &b);
	
	a = reverse(a);
	b = reverse(b);

	sum = reverse(a + b);

	printf("%d\n", sum);

	return 0;
}