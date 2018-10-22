#include <stdio.h>

int main(){
	int i, max;
	max = 0;
	do{
		printf("숫자를 입력하세요 : ");
		scanf("%d" , &i);
		max = i;
		if(max<i)
			max = i;
	}
	while(i!=0);
	printf("%d\n" , max);
	return 0;
}
//22번, 23번, 25번은 모르겠습니다..