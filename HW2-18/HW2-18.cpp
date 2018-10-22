#include <stdio.h>

int main(){
	int i;
	int sum = 0;
	for(i=1; i<101; i++)
	{
		if(i%5 == 0){
			sum = sum + i;
		}
	}
	printf("1 ~ 100에서 5의 배수들의 총합 : %d\n" , sum);
}