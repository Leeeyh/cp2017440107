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

int main(){
	int a[3] = {10, 20, 30};
	int* ptr;
	ptr = a;	//배열의 이름만 사용하면 그 배열의 첫 요소의 포인터 값이 된다 

	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	//포인터변수 이름을 배열 이름으로 사용할 수 있다
	printf("a[0] = %d\n", ptr[0]);
	printf("a[1] = %d\n", ptr[1]);
	printf("a[2] = %d\n", ptr[2]);

	//a = ptr;//error - 배열의 이름(a)는 값만 가지고 있다. 즉, rvalue이다.

	//printArray(a, 3);
		
	return 0;
}