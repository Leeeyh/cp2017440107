#include <stdio.h>

void main()
{
	int i, num;
	int sum = 0;

	for(i=0; i<10; i++)
	{
		printf("10���� ������ �Է��Ͻÿ� \n");
		scanf("%d" , &num);
		sum = sum + num;     
	}
	printf("%d" , sum);
}