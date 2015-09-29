#include <stdio.h>

int gcd(int a, int b){

	if(b == 0)
		return a;
	else
		a = gcd(b, a%b);

	return a;
	
}

int main(void){
	int a, b, temp, g;
	scanf("%d %d", &a, &b);

	if(a < b){
		temp = b;
		b = a;
		a = temp;
	}

	g = gcd(a, b);

	printf("%d %d\n", g, (a/g)*b);

	return 0;
}