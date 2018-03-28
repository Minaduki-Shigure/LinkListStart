#include"LinkList.h"

LNode *NewNode(void)
{
	LNode *p = NULL;
	p = (LNode*)malloc(sizeof(LNode));
	return p;
}

LNode *ListInit(int length)
{
	LNode *head = NULL, *p = NULL, *p1 = NULL;
	int i = 0;
	for (i = 0; i <= length; i++)
	{
		p = NewNode();
		p->data = i;
		p->next = NULL;
		if (i == 0)
			head = p1 = p;
		else
		{
			p1->next = p;
			p1 = p;
		}
	}
	return head;
}

void ElemInsert(LNode *ListHead, int location, ElemType input)
{
	LNode *p = NewNode();
	LNode *temp = NULL, *temp1 = NULL, *swap = NULL;
	p->data = input;
	int i = 0;
	temp1 = ListHead;
	for (i = 0; i < location - 1; i++)
	{
		temp = temp1->next;
		temp1 = temp;
	}
	swap = temp->next;
	temp->next = p;
	p->next = swap;
	return;
}

ElemType ElemDelete(LNode *ListHead, int location)
{
	LNode *temp = NULL, *temp1 = NULL, *swap = NULL;
	int i = 0;
	ElemType output;
	temp1 = ListHead;
	for (i = 0; i < location - 1; i++)
	{
		temp = temp1->next;
		temp1 = temp;
	}
	temp = temp1->next;
	swap = temp->next;
	output = temp->data;
	free(temp);
	temp1->next = swap;
}

void ListPrint(LNode *ListHead)
{
	LNode *p = ListHead;
	ElemType out;
	while (1)
	{
		p = p->next;
		if (p == NULL)
			break;
		out = p->data;
		printf("%3d\t", out);
	}
	printf("\n");
	return;
}