#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int i;
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%d" , &num);

	if(num==1){
		printf("�μ��� ���ǿ� ���� �ʽ��ϴ�\n");
		exit(1);
	}
	for(i=2; i<num; i++){
		if(num%i==0){
			printf("%d " , i);
		}
	}
	
	return 0;
	
}

 