#include <stdio.h>
int main(){
	int num;
	int sum = 0;
	int final = 0;

	for( ; ; ){
		printf("���� �Է��Ͻÿ� :");
		scanf("%d" , &num);
		sum =  sum + num;
		if(num >= 7){
			final = sum;
			break;
		}
		else 
			printf("�ٽ� �Է��Ͻÿ�.\n");
	}
	printf("%d" , final);
	return 0;
}
