#include <stdio.h>

int main(){
	int a= 10;
	int* ptr;
	ptr = &a;
	*ptr = 20;
	printf("a = %d\n", a);

	return 0;
}

//&a; - "address of a"
//*ptr; - "data of ptr"
