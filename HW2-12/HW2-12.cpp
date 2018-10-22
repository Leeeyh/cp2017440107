#include <stdio.h>

int main(){
	int tmp = 0;
	int num;
	int cnt = 0;
	while(1){
		printf("원하는 정수를 입력하시오\n");
		scanf("%d" , &num);
		if(num==0) break;
		if(cnt == 0) 
			tmp = num;
		else if(num > tmp)
			tmp = num;
		cnt++;
	}
	printf("최대값은 : %d\n", tmp);
	return 0;
}

