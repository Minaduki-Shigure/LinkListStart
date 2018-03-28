#include"LinkList.h"

int main(void)
{
	LNode *head = ListInit(100);
	int deleted = -1;
	printf("ListInit!\n");
	ListPrint(head);
	printf("\n");
	system("pause");
	printf("\n");
	ElemInsert(head, 101, 101);
	printf("ElemInsert! Inserted 101 @ 101!\n");
	ListPrint(head);
	printf("\n");
	system("pause");
	printf("\n");
	deleted = ElemDelete(head, 100);
	printf("ElemDelete! Deleted the Elem @ 100 with the value returned as %d!\n", deleted);
	ListPrint(head);
	printf("\n");
	system("pause");
	printf("\n");
	LNode *head1 = ListInit(100), *head2 = NewNode(), *common = NULL;
	head2 = head1->next->next->next->next->next;
	printf("Compare start!\n");
	ListPrint(head1);
	printf("\n");
	ListPrint(head2);
	common = FindFirstCommonNode(head1, head2);
	printf("\n");
	if (common == NULL)
		printf("Compare finished! No common nodes!\n");
	else
		printf("Compare Finished! The first common node is %d @ %p\n", common->next->data, common);
	printf("\n");
	system("pause");
	printf("\n");
	printf("ListInvert!\n");
	ListPrint(head1);
	printf("\n");
	ListInvert(head1);
	ListPrint(head1);
	printf("\n");
	system("pause");
	return 0;
}