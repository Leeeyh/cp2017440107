#include <stdio.h>
void printArray(char* arr, int len){
	for(int index = 0; index <len; index++){
		printf("array[%d] = %c\n", index, arr[index]);
	}
}

int main(){

	char c;
	c = 'A';
	printf("c = %d\n", c);
	printf("c = %c\n", c);

	char a[] = {'H', 'e', 'l', 'l', 'o'};
	printArray(a, 5); 

	char b[] = "Hello";
	printf("%s \n", b);

	return 0;
}