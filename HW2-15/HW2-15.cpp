#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num, tmp;
	srand((unsigned)time(NULL));
	tmp = rand()%99+1;
	//랜덤 생성
	for(int i=0; i<10; i++)	{
		printf("숫자를 입력하십시오 : ");
		scanf("%d" , &num);
		if(tmp > num){
			printf("입력하신 숫자 보다 큽니다.\n");
		}
		else if(tmp < num)	{
			printf("입력하신 숫자 보다 작습니다.\n");
		}
		else if(tmp == num){
			printf("정답입니다!\n");
			break;
		}
	}
	return 0;
}

