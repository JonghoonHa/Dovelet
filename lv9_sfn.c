#include <stdio.h>

int func(int num, int a){

	if(num == 0)
		return 0;
	else
		return func(num/a, a) + num%a;
	
}

int main(void){

	int i, temp;
	for(i=1000; i<10000; i++){

		temp = func(i, 10);
		if(temp == func(i, 12)){
			if(temp == func(i, 16))
				printf("%d\n", i);
		}
	}

	return 0;
}