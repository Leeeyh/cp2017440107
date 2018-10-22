#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int i;
	printf("숫자를 입력하시오 :");
	scanf("%d" , &num);

	if(num==1){
		printf("인수의 조건에 맞지 않습니다\n");
		exit(1);
	}
	for(i=2; i<num; i++){
		if(num%i==0){
			printf("%d " , i);
		}
	}
	
	return 0;
	
}

 