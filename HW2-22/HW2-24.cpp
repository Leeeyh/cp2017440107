#include <stdio.h>
int main(){
	int i, j, line;
	printf("라인 수를 입력하시오 : ");
	scanf("%d", &line);
	for(i=0; i<line; i++){
		for(j=0; j<=i*2; j++){
			printf("*");
		}
		printf("\n");
	}
}