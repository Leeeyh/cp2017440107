#include <stdio.h>

int main(){
	int ggd;
	int i;

	printf("출력할 단을 입력하시오 \n");
	scanf("%d", &ggd);

	for(i=1; i<10; i++){
		printf("%d * %d = %d\n", ggd, i, ggd*i);
	}
	return 0;
}