#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int athletic(int num, int win, int lose, int count, char *str){

	int i;

	if(num == win){
		i = 0;
		while(str[i] != '0'){
			printf("%c", str[i++]);
		}
		printf("\n");
		return ++count;
	}

	str[win+lose] = 'o';
	count = athletic(num, win+1, lose, count, str);
	
	str[win+lose] = '0';
	if(lose>=num-1)	return count;
	str[win+lose] = 'x';

	count = athletic(num, win, lose+1, count, str);
	str[win+lose] = '0';

	return count;

}
int main(void){

	int num;
	char *str;
	
	scanf("%d", &num);
	str = (char*)malloc(sizeof(char)*(num*2));
	memset(str, '0', sizeof(char)*(num*2));

	printf("total %d case(s)\n", athletic(num, 0, 0, 0, str));

	free(str);

	return 0;
}