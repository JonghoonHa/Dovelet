#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pat(int n, int p, int c, char *str){

	int i;

	if(n == c){
		if(p == 0){

			i = 0;
			while(str[i] == '0' || str[i] == '1'){
				printf("%c", str[i++]);
			}
			printf("\n");
		}
		return 0;
	}
	
	if(p>0){
		str[c] = '1';
		pat(n, p-1, c+1, str);
		str[c] = '0';
		pat(n, p, c+1, str);			
	}else{
		str[c] = '0';
		pat(n, p, c+1, str);
	}

	return 0;

}

int main(void){

	int n, p;
	char *str;
	scanf("%d %d", &n, &p);

	str = (char*)malloc(sizeof(char)*n);
	memset(str,'0',sizeof(char)*n);

	pat(n, p, 0, str);

	return 0;
}