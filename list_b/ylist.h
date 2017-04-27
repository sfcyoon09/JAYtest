#ifndef __YLIST_H__
#define __YLIST_H__


typedef int LData;
typedef struct _node
{
	LData data;
	struct _node *next;
} Node;

typedef struct _linkedList
{
	Node *head;
	Node *cur;
	Node *tail;
	int index;
} LinkedList;

typedef LinkedList List;

void ListInit(List *plist);
void ListInsert(List *plist,int index);



#endif

