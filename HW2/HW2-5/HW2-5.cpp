#include <stdio.h>
int main(void)
{
	int sum = 0;
	int i = 1;
	do
	{
		if(i%3==0)
		{sum = sum + i;}
		i++;
	}
	while(i<=100);
	printf("1���� 100������ ��� 3�ǹ���� ���� %d�̴�.\n", sum);
	return 0;
}


