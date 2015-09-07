#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){

	if(b == 0)
		return a;
	else
		gcd(b, a%b);

}

int main(void){

	int count, num, i, mgcd;

	scanf("%d", &count);

	for(i=0; i<count; i++){
		if(i==0)
			scanf("%d ", &mgcd);
		else{
			scanf("%d", &num);

			if(num > mgcd)
				mgcd = gcd(num, mgcd);
			else
				mgcd = gcd(mgcd, num);
		}
	}

	printf("%d\n", mgcd);
	
	return 0;
}