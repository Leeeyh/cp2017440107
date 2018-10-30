#include <stdio.h>
//1. 두 정수 사이의 모든 정수를 순서대로 화면에 출력하는 함수

//함수 printNumber()
//입력 : 두 정수
//출력 : 없음
//부수효과 : 없음

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