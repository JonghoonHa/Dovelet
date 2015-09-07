#include <stdio.h>
#include <math.h>

typedef enum{false, true} bool;

long long reverse(long long num){

	long long temp=0;
	
	if(num%10==0)
		return 0;
	while(num > 0){
		temp *= 10;
		temp += num%10;
		num /= 10;
	}
	
	return temp;
}

long long change(int num, int n){
	long long result = 0;
	int count=0;

	while(num>0){
		result += (num%n) * pow((float)10, count);
		num /= n;
		count++;
	}

	return result;	
}

int main(void){

	int i, num=0, palindrome, n, s, count;
	long long temp;
		
	scanf("%d %d", &s, &n);

	while(true){

		n++;
		count = 0;

		for(i=2; i<=10; i++){
			temp = change(n, i);
			if(temp == reverse(temp)){
				count++;
				if(count>1){
					printf("%d\n", n);
					num += 1;
					break;
				}
			}
		}

		if(num>=s)
			break;			

	}
	return 0;
}