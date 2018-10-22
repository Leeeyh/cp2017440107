#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[10];
	int i;
	int l = 0;
	printf("수를 입력하시오 : ");
	gets(str);
	for(i=0; i<str[i]; i++){
		l = l + 1;
	}
	printf("입력된 수는 : ");
	puts(str);
	printf("입력된 수의 자리수의 개수는 : %d\n" , l);
	return 0;
}