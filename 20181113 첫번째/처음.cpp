#include <stdio.h>
//�Լ� printArray
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : ȭ�鿡 �迭�� ���� ���
//void printArray(int arr[], int len){ //(�迭�̸�[], �迭����)
void printArray(int* arr, int len){ //������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index <len; index++){
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

int main(){
	int a[3] = {10, 20, 30};
	int* ptr;
	ptr = a;	//�迭�� �̸��� ����ϸ� �� �迭�� ù ����� ������ ���� �ȴ� 

	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	//�����ͺ��� �̸��� �迭 �̸����� ����� �� �ִ�
	printf("a[0] = %d\n", ptr[0]);
	printf("a[1] = %d\n", ptr[1]);
	printf("a[2] = %d\n", ptr[2]);

	//a = ptr;//error - �迭�� �̸�(a)�� ���� ������ �ִ�. ��, rvalue�̴�.

	//printArray(a, 3);
		
	return 0;
}