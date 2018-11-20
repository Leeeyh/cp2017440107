#include <stdio.h>
void swapElement(int* arr, int i, int j){
	int tmp;
	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

//�Լ� : insertElement
//�Է� : �迭�̸�, �����Ϸ��� ��� �ε���
//���: ����
//�μ�ȿ�� : �迭�� el��ұ��� ����
void insertElement(int* arr, int el){
	while(el>0){
		if(arr[el]<arr[el-1])
			swapElement(arr, el-1, el);
		else
			break;
	}

}
//�Լ� : insertionSort
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭 ����
void insertionSort(int* arr, int length){
	for(int i = 1; i<length; i++){
		insertElement(arr, i);
	}
}