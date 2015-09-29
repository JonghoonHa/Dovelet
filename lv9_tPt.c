#include <stdio.h>

int mt(int num){

	if(num == 1)
		printf("1");
	else{
		mt(num-1);
		printf("%d", num);
		mt(num-1);
	}
}

int main(void){
	int num;
	scanf("%d", &num);

	mt(num);
	printf("\n");

	return 0;
	
}