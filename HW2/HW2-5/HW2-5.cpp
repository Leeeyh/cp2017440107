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
	printf("1부터 100사이의 모든 3의배수의 합은 %d이다.\n", sum);
	return 0;
}


