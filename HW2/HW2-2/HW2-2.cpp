#include <stdio.h>

void main()
{
	int i, num;
	int sum = 0;

	for(i=0; i<10; i++)
	{
		printf("10개의 정수를 입력하시오 \n");
		scanf("%d" , &num);
		sum = sum + num;     
	}
	printf("%d" , sum);
}