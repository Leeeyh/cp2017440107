#include <stdio.h>
//함수 printArray
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력
//void printArray(int arr[], int len){ //(배열이름[], 배열길이)
void printArray(int* arr, int len){ //앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index <len; index++){
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

//함수 : findMinindex{}
//입력 : 배열(배열이름, 배열길이)
//출력 : 최소값의 인덱스
int findMinindex(int* arr, int length){
	int minindex = 0;
	for(int count=1; count<length; count++){
		if(arr[minindex] > arr[count])
			minindex = count;
	}
	return minindex;
}

//함수 : findMin{}
//입력 : 배열(배열이름, 배열길이)
//출력 : 배열 최소값
int findMin(int* arr, int length){
	int min = arr[0];
	for(int count=1; count<length; count++){
		if(min > arr[count])
			min = arr[count];
	}
	return min;
}

//함수 : swapElement
//입력 : 배열, 두개의 인덱스
//출력 : 없음
//부수효과 : 배열의 두 인덱스 element가 바뀐다
void swapElement(int* arr, int i, int j){
	int tmp;
	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

//함수 : selectionSort
//입력 : 배열
//출력 : 없음
//부수효과 : 배열이 정렬됨
void selectSort(int* arr, int length){


}
int main(){
	int a[] = {30, 35, 27, 15, 40};

	printf("minimum value of the array is %d\n", findMin(a, 5));
	printf("the index of minimum value is %d\n", findMinindex(a, 5));
	swapElement(a,0,3);
	printArray(a,5);

	//a = ptr;//error - 배열의 이름(a)는 값만 가지고 있다. 즉, rvalue이다.

	//printArray(a, 3);
		
	return 0;
}