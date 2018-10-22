#include <stdio.h>
int main(){
	int num;
	int sum = 0;
	int final = 0;

	for( ; ; ){
		printf("수를 입력하시오 :");
		scanf("%d" , &num);
		sum =  sum + num;
		if(num >= 7){
			final = sum;
			break;
		}
		else 
			printf("다시 입력하시오.\n");
	}
	printf("%d" , final);
	return 0;
}
