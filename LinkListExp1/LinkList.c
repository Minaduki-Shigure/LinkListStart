#include"LinkList.h"

LNode *ListInit(int length)
{
	LNode *head = NULL, *tail = NULL, *p = NULL;
	int i = 0;
	for (i = 0; i <= length; i++)
	{
		p = (LNode*)malloc(sizeof(LNode));
		p->data = i;
		p->next = NULL;
		if (i == 0)
			head = p;
		else
		{

		}
	}
}

/*
Node *Initlist(int length)
{
	Node *p = NULL, *p1 = NULL, *Nhead = NULL;
	int i;
	for (i = 0; i <= length; i++) {
		p = (Node*)malloc(sizeof(Node));
		p->data = i;
		p->next = NULL;
		if (i == 0) Nhead = p1 = p;
		else {
			p1->next = p;
			p1 = p;
		}
	}
	return Nhead;
}
*/