#include <stdio.h>

int main(){
	int i, j, num;
	int sum = 0;
	printf("숫자를 입력하시오 : ");
	scanf("%d" , &num);

	for(i=2; i<=num; i++){
		for(j=2; j<=i; j++){
			if(i == j)
				sum = sum + i;
			else if(i%j == 0)
				break;
		}
	}
	printf("소수들의 합 : %d\n", sum);
	return 0;
}