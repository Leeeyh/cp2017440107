#include <stdio.h>
int main(){
	int a, b;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &b);

	if (a>b)
		printf("�� ū ���� %d�̴�\n", a);
	else if (a<b)
		printf("�� ū ���� %d�̴�\n", b);
	else
		printf("a = b�̴�");

	return 0;
}

