#include <stdio.h>

int dance(int num, int start, int finish, int sum){

	if(finish == start + 1){
		sum += start * finish;
		return sum;
	}
	else if(finish == start){
		return sum;
	}
		
	sum = dance(num, start, (start+finish)/2, sum);

	if((finish-start)%2 !=0)
		start += (finish-start+1)/2;
	else
		start += (finish-start)/2 +1;

	sum = dance(num, start, finish, sum);
	
	return sum;
}
int main(void){

	int num;
	scanf("%d", &num);

	printf("%d\n", dance(num, 1, num, 0));

	return 0;
}