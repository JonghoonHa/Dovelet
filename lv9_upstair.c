#include <stdio.h>

int upstair(int n){

	if(n <= 1)
		return 1;
	else{
		return upstair(n-1) + upstair(n-2);
	}
}

int main(){
	int num;
	scanf("%d", &num);

	printf("%d\n", upstair(num));

	return 0;
}