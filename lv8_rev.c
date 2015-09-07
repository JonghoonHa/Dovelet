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

	int num, rev;

	for(num=10; num<=100000; num++){	
		
		rev = reverse(num);

		if(reverse(num + rev) == num+ rev)
			printf("%d\n", num);
		
	}

	return 0;
}