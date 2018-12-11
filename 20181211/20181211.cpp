#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext;
} Node;

//�Լ� : printLL()
//�Է� : ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//��� : ����
//�μ�ȿ�� : ����
void printLL(Node* ptr){
	while(ptr != NULL){
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}

//�Լ� : averageLL()
//�Է� : ���Ḯ��Ʈ
//��� : ��� ������ ���
//�μ�ȿ�� : ����
double averageLL(Node* ptr){
	int sum = 0, cnt = 0;
	double average;
	while(ptr != NULL){
		sum += ptr->score;
		cnt++;
		ptr = ptr->pNext;
	}
	average = ((double)sum) / cnt;
	return average;
}

//�Լ� : returnTail()
//�Է� : ���Ḯ��Ʈ
//��� : ������ ����� ������
//�μ�ȿ�� : ����
Node* returnTail(Node* ptr){
	if(ptr == NULL)			//���Ḯ��Ʈ�� �����Ͱ� ����
		return NULL;

	while(1){
		if(ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}

//�Լ� : addTail()
//�Է� : ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//��� : ����
//�μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���
void addTail(Node*pHead, Node* pNode){
	if(pHead == NULL){
		printf("error!");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}


//�Լ� : createNode()
//�Է� : ����
//��� : ����ϳ��� �����Ҵ����� �����Ͽ� ��ȯ. �� �� score = �Է�. pNext = NULL
//�μ�ȿ�� : ����
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}

//�Լ� : addHead()
//�Է� : ���Ḯ��Ʈ, �� ���
//��� : ����
//�μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(Node** pHead, Node* pNewnode){
	pNewnode ->pNext = *pHead;
	*pHead = pNewnode;
}

int main(){
	Node* pHead = NULL, *ptr;	//������� ������, NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ̷� �������.
/*	Node a, b;
	a.score = 10; b.score = 20;
	a.pNext = &b; b.pNext = NULL;
	pHead = &a;
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	//pHead->pNext = createNode(20);	
	printLL(pHead);*/

	double test;
	test = 10/4;			//2�� ��ȯ, ������ 2�� double�� 2.0���� ��ȯ
	printf("test = %f\n", test);
	test = 10.0/4;			//2,5 ��ȯ
	printf("test = %f\n", test);
	test = ((double)10)/4;	//
	printf("test = %f\n", test);
	printLL(pHead);
	printf("average = %f\n", averageLL(pHead));


	return 0;
}