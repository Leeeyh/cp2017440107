#include <stdio.h>
//7. ���� �迭�� ���� ��ȯ�ϴ� �Լ�

//�Լ��̸� : addArray()
//�Է� : �迭
//��� : �迭 �� ��ҵ��� ��
//�μ�ȿ�� : ����

int addArray(int arr[], int length){
	int sum = 0, count = 0;
	while(count <length)
		sum += arr[count++];
	return sum;
}

int main(){
	int a[4] = {10, 20, 30, 40};
	int length = 4;

	printf("%d\n",addArray(a, 4));
	printf("end of program\n");
	return 0;
}