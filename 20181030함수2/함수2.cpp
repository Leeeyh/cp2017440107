#include <stdio.h>
//7. 정수 배열의 합을 반환하는 함수

//함수이름 : addArray()
//입력 : 배열
//출력 : 배열 각 요소들의 합
//부수효과 : 없음

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