#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[10];
	int i;
	int l = 0;
	printf("���� �Է��Ͻÿ� : ");
	gets(str);
	for(i=0; i<str[i]; i++){
		l = l + 1;
	}
	printf("�Էµ� ���� : ");
	puts(str);
	printf("�Էµ� ���� �ڸ����� ������ : %d\n" , l);
	return 0;
}