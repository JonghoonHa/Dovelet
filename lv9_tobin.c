#include <stdio.h>

void print(int n)
{
   if ( n > 1 ) print(n/2);
   printf("%d",n%2);
}
int main()
{
	int num;
	scanf("%d", &num);

	print(num);
	printf("\n");

	return 0;
}