#include <stdio.h>

int main(){
	int i, j, num;
	int sum = 0;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d" , &num);

	for(i=2; i<=num; i++){
		for(j=2; j<=i; j++){
			if(i == j)
				sum = sum + i;
			else if(i%j == 0)
				break;
		}
	}
	printf("�Ҽ����� �� : %d\n", sum);
	return 0;
}