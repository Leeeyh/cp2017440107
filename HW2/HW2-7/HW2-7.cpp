#include <stdio.h>

void main()
{
	int i;
	int cnt = 0;

	do
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d" , &i);
		cnt = cnt + i;

	}while(i!=0);


	printf("%d" , cnt);
}