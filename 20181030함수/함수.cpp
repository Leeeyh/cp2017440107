#include <stdio.h>
//1. �� ���� ������ ��� ������ ������� ȭ�鿡 ����ϴ� �Լ�

//�Լ� printNumber()
//�Է� : �� ����
//��� : ����
//�μ�ȿ�� : ����

void printNumber(int a, int b){
	int a = 3, int b = 50;
	int count = 0;
	while (count<=b)
		printf("%d\n", count++);
}

int main(){
	int a = 3, b = 50;
	printNumber(a, b);
	printf("end of program\n");
}