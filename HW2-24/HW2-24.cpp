#include <stdio.h>
int main(){
	int i, j, line;
	printf("���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &line);
	for(i=0; i<line; i++){
		for(j=0; j<=i*2; j++){
			printf("*");
		}
		printf("\n");
	}
}