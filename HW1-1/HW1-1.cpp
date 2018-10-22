#include <stdio.h>
int main(){
	int a, b;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("정수를 입력하세요 : ");
	scanf("%d", &b);

	if (a>b)
		printf("더 큰 수는 %d이다\n", a);
	else if (a<b)
		printf("더 큰 수는 %d이다\n", b);
	else
		printf("a = b이다");

	return 0;
}

