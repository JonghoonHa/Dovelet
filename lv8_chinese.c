#include <stdio.h>
#include <math.h>

int gcd(int a, int b){

	if(b == 0)
		return a;
	else
		gcd(b, a%b);
}

int main(void){

	int a, b, c, r1, r2, r3, mgcd;
	unsigned long long i, lcm;

	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &r1, &r2, &r3);

	mgcd = gcd(a, b);
	mgcd = gcd(mgcd, c);

	lcm = a * (b/mgcd) * (c/mgcd);

	for(i=r1; i<=18446744073709551615; i+= lcm){
		if(i%b == r2 && i%c == r3){
			printf("%I64d\n", i);
			break;
		}
	}

	return 0;
}