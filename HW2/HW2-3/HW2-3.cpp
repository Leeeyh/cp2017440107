#include <stdio.h>
int main(void)
{
	int sum;
	int i =1;
	sum = 0;
	while(i<=100){
		if(i%3==0){
			sum = sum + i;
		}
		i++;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�̴�.\n", sum);
	return 0;
}