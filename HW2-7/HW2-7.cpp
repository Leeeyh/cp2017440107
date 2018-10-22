#include <stdio.h>

int main(){
	int i;
	int cnt = 0;
	do{
		printf("숫자를 입력하세요 : ");
		scanf("%d" , &i);
		cnt = cnt + i;
	}
	while(i!=0);
	printf("%d\n" , cnt);
	return 0;
}