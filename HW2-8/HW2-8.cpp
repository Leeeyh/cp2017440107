#include <stdio.h>

int main(){
	int ggd;
	int i;

	printf("����� ���� �Է��Ͻÿ� \n");
	scanf("%d", &ggd);

	for(i=1; i<10; i++){
		printf("%d * %d = %d\n", ggd, i, ggd*i);
	}
	return 0;
}