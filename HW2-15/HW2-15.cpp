#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num, tmp;
	srand((unsigned)time(NULL));
	tmp = rand()%99+1;
	//���� ����
	for(int i=0; i<10; i++)	{
		printf("���ڸ� �Է��Ͻʽÿ� : ");
		scanf("%d" , &num);
		if(tmp > num){
			printf("�Է��Ͻ� ���� ���� Ů�ϴ�.\n");
		}
		else if(tmp < num)	{
			printf("�Է��Ͻ� ���� ���� �۽��ϴ�.\n");
		}
		else if(tmp == num){
			printf("�����Դϴ�!\n");
			break;
		}
	}
	return 0;
}

