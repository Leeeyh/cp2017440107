#include <stdio.h>

int main(){
	int ggd;
	int i;

	printf("����� ���� �Է��Ͻÿ� \n");
	scanf("%d", &ggd);
	if(ggd<10 && ggd>0){
		for(i=1; i<10; i++){
			printf("%d * %d = %d\n", ggd, i, ggd*i);
			break;
		}
	}
	else
		printf("1���� 9������ ���ڸ� �Է��Ͻÿ�.");
	return 0;
}