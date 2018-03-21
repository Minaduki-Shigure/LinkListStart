#pragma once

#include<stdio.h>

typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

LNode *ListInit(int length);

