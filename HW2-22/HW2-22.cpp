#include <stdio.h>

int main(){
	int i, max;
	max = 0;
	do{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d" , &i);
		max = i;
		if(max<i)
			max = i;
	}
	while(i!=0);
	printf("%d\n" , max);
	return 0;
}
//22��, 23��, 25���� �𸣰ڽ��ϴ�..