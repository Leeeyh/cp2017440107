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

//�Լ� : findMinindex{}
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �ּҰ��� �ε���
int findMinindex(int* arr, int length){
	int minindex = 0;
	for(int count=1; count<length; count++){
		if(arr[minindex] > arr[count])
			minindex = count;
	}
	return minindex;
}

//�Լ� : findMin{}
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �迭 �ּҰ�
int findMin(int* arr, int length){
	int min = arr[0];
	for(int count=1; count<length; count++){
		if(min > arr[count])
			min = arr[count];
	}
	return min;
}

//�Լ� : swapElement
//�Է� : �迭, �ΰ��� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� �� �ε��� element�� �ٲ��
void swapElement(int* arr, int i, int j){
	int tmp;
	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

//�Լ� : selectionSort
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵ�
void selectSort(int* arr, int length){


}
int main(){
	int a[] = {30, 35, 27, 15, 40};

	printf("minimum value of the array is %d\n", findMin(a, 5));
	printf("the index of minimum value is %d\n", findMinindex(a, 5));
	swapElement(a,0,3);
	printArray(a,5);

	//a = ptr;//error - �迭�� �̸�(a)�� ���� ������ �ִ�. ��, rvalue�̴�.

	//printArray(a, 3);
		
	return 0;
}