#include <stdio.h>

int pow(int x, int y){

	int temp;

	if(y==1) 
		return x;
	else{
		y -= 1;

		temp = pow(x, y);
		x *= temp;

	}
	return x;
}
int main(){
	int num, b;
	scanf("%d %d", &num, &b);

	printf("%d\n", pow(num, b));
}