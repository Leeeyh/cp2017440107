#include <stdio.h>
void swap (int *ptr1, int *ptr2){
	int tmp;
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}


int main(){
	int a = 10, b = 20;
	//swap :���� a, b���� �ٲ۴�
	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}