#include <stdio.h>

void main()
{
	int i, total;
	
	while(1)
	{
		printf("양의 정수를 입력하시오 : ");
		scanf("%d" , &i);

		if(i>0 && i!=0)
		{
			total = i * 2;
			printf("%d\n" , total);

			break;
		}

		else 
			printf("양의 정수를 입력하시오!\n");
	}
}