#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext;
} Node;

typedef struct linkedlist{
	Node* pHead;
	Node* pTail;
	int nNode;
} LinkedList;


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

//�Լ� : printLL()
//�Է� : ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//��� : ����
//�μ�ȿ�� : ����
void printLL(LinkedList* pList){
	Node* ptr = pList->pHead;
	while(ptr != NULL){
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
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
void addHead(LinkedList* pList, Node* pNewnode){
	if(pList == NULL){
		printf("error!");
		return;
	}
	pNewnode ->pNext = pList->pHead;
	pList->pHead = pNewnode;
	pList->nNode++;
}

int main(){
/*	Node a, b;
	a.score = 10; b.score = 20;
	a.pNext = &b; b.pNext = NULL;
	pHead = &a;
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	//pHead->pNext = createNode(20);	
	printLL(pHead);*/


	LinkedList* pList;
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, createNode(10));
	addHead(pList, createNode(20));
	addHead(pList, createNode(30));
	addHead(pList, createNode(40));



	return 0;
}
//deletetail, addtail, addhead, deletehead