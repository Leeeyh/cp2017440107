#include <stdio.h>
int main(){
	int a, b, c;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("정수를 입력하세요 : ");
	scanf("%d", &b);
	printf("정수를 입력하세요 : ");
	scanf("%d", &c);

	if (a>b)
		if (a>c)
			printf("가장 큰 수는 %d\n", a);
		else
			printf("가장 큰 수는 %d\n", c);
	else if (b>a)
		if (b>c)
			printf("가장 큰 수는 %d\n", b);
		else
			printf("가장 큰 수는 %d\n", c);

	return 0;
}
