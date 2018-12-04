#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
	double real;	//��� ����(member variable)
	double imag;	//��(ditto)
} Complex;//����ü ������ �ݵ�� �����ݷ����� ������ �Ѵ�.
//�ڷ��� struct complex�� ������ Complex�� �θ���.
 
//������ Ÿ���� ���� ����
typedef int myintType;	//�ڷ��� int�� ������ myintType�̶�� �θ���.

//�Լ� : printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ����
void printComplex(Complex* ptr){
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

//�Լ� : conjugate
//�Է� : ���Ҽ� (������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void conjugate(Complex* ptr){
	ptr->imag = -1*ptr->imag;
}
//�Լ� : returnConjugate
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
//�μ�ȿ�� : ����
Complex* returnConjugate(Complex* ptr){
	Complex* tmpptr;
	tmpptr = (Complex*) malloc(sizeof(Complex));//�����Ҵ�
	tmpptr->real = ptr->real;
	tmpptr->imag = -1*ptr->imag;
	return tmpptr;
}

int main(){
	/*����ü ���� ����
	struct complex a;
	a.real = 10;	//����ü ������ ��� ���� ���� ��� => ����ü ���� �̸�.��� ���� �̸�
	a.imag = 20;
	*/
	myintType count = 10;	//int count = 10;

	Complex a, b;

	b = returnConjugate(&a);
	printComplex(&b);
	conjugate(&a);
	printComplex(&a);

	//����ü ������ ���� ����
	Complex* ptr;
	ptr = &a;
	ptr->real = 100;	//����ü ������ ������ ��� ���� ���ٹ�� => ����ü ���� �̸�->��� ���� �̸�
	ptr->imag = 200;
	
	return 0;
}