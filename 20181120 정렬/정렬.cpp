#include <stdio.h>
void swapElement(int* arr, int i, int j){
	int tmp;
	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

//함수 : insertElement
//입력 : 배열이름, 삽입하려는 요소 인덱스
//출력: 없음
//부수효과 : 배열의 el요소까지 정렬
void insertElement(int* arr, int el){
	while(el>0){
		if(arr[el]<arr[el-1])
			swapElement(arr, el-1, el);
		else
			break;
	}

}
//함수 : insertionSort
//입력 : 배열
//출력 : 없음
//부수효과 : 배열 정렬
void insertionSort(int* arr, int length){
	for(int i = 1; i<length; i++){
		insertElement(arr, i);
	}
}