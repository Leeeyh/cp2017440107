#include <stdio.h>
int main(){
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	
	if(a>= 80 && a<=100)
		printf("����� A\n");
	else if ( a<80 && a>=60)
		printf("����� B\n");
	else if ( a<60 && a>=40)
		printf("����� C\n");
	else if ( a<40 && a>=20)
		printf("����� D\n");
	else if ( a<20 && a>=0)
		printf("����� E\n");

	return 0;
}
