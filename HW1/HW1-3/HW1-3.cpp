#include <stdio.h>
int main(){
	int a, b, c;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &c);

	if (a>b)
		if (a>c)
			printf("���� ū ���� %d\n", a);
		else
			printf("���� ū ���� %d\n", c);
	else if (b>a)
		if (b>c)
			printf("���� ū ���� %d\n", b);
		else
			printf("���� ū ���� %d\n", c);

	return 0;
}
