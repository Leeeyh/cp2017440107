#include <stdio.h>

int main(){
	int tmp = 0;
	int num;
	int cnt = 0;
	while(1){
		printf("���ϴ� ������ �Է��Ͻÿ�\n");
		scanf("%d" , &num);
		if(num==0) break;
		if(cnt == 0) 
			tmp = num;
		else if(num > tmp)
			tmp = num;
		cnt++;
	}
	printf("�ִ밪�� : %d\n", tmp);
	return 0;
}

