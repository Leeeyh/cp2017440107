#include <stdio.h>

int main(){
	int ggd;
	int i;

	printf("출력할 단을 입력하시오 \n");
	scanf("%d", &ggd);
	if(ggd<10 && ggd>0){
		for(i=1; i<10; i++){
			printf("%d * %d = %d\n", ggd, i, ggd*i);
			break;
		}
	}
	else
		printf("1부터 9사이의 숫자를 입력하시오.");
	return 0;
}