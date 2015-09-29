#include <stdio.h>

int mt(int num, int limit){

	if(num == limit){
		printf("%d", num);
		return 0;
	}

	printf("%d", num);
	mt(num+1, limit);
	printf("%d", num);
}

int main(void){
	int num;
	scanf("%d", &num);

	mt(1, num);
	printf("\n");

	return 0;
}