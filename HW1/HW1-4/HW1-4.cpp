#include <stdio.h>
int main(){
	int a;

	printf("점수를 입력하세요 : ");
	scanf("%d", &a);
	
	if(a>= 80 && a<=100)
		printf("등급은 A\n");
	else if ( a<80 && a>=60)
		printf("등급은 B\n");
	else if ( a<60 && a>=40)
		printf("등급은 C\n");
	else if ( a<40 && a>=20)
		printf("등급은 D\n");
	else if ( a<20 && a>=0)
		printf("등급은 E\n");

	return 0;
}
