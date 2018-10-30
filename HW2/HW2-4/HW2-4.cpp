#include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	for(i=1; i<=100; i++)
	{
		if (i%3==0)
			sum = sum + i;
	}
	printf("1부터 100사이의 모든 3의배수의 합은 %이다.\n", sum);
	return 0;
}

