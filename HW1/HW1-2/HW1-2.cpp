#include <stdio.h>
int main(){
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	if (a % 2 == 1)
		printf("입력한 정수는 홀수\n");
	else
		printf("입력한 정수는 짝수\n");
	
	return 0;
}
