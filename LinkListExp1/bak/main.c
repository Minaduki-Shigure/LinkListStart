#include"LinkList.h"

int main(void)
{
	LNode *head = ListInit(100);
	int deleted = -1;
	ListPrint(head);
	system("pause");
	printf("\n");
	ElemInsert(head, 101, 101);
	ListPrint(head);
	system("pause");
	printf("\n");
	deleted = ElemDelete(head, 100);
	ListPrint(head);
	system("pause");
	return 0;
}