#include <stdio.h>

int main(){
	int i, total;
	while(1){
		printf("���� ������ �Է��Ͻÿ� : ");
		scanf("%d\n" , &i);
		if(i>0 && i!=0){
			total = i * 2;
			printf("%d\n" , total);
			break;
		}
		else 
			printf("���� ������ �Է��Ͻÿ�!\n");
	}
	return 0;
}