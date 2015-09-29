#include <stdio.h>

int gcd(int a, int b){

	if(b == 0)
		return a;
	else
		a = gcd(b, a%b);

	return a;
	
}

int line(float x1, float y1, float x2, float y2, int dx, int dy, int count){

	if(x1 > x2 || y1 > y2)
		return count;

	line(x1+dx, y1+dy, x2, y2, dx, dy, ++count);
}

void swap(int *a, int *b){
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void){

	int x1, x2, y1, y2, dx, dy, temp, g;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	if(x1 > x2)
		swap(&x1, &x2);
	if(y1 > y2)
		swap(&y1, &y2);

	dx = x2-x1;
	dy = y2-y1;

	if(dx > dy)
		swap(&dx, &dy);

	g = gcd(dx, dy);

	printf("%d\n", line(x1, y1, x2, y2, (x2-x1)/g, (y2-y1)/g, 0));


	return 0;
}