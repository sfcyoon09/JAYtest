#ifndef __YLIST_H__
#define __YLIST_H__

typedef struct List_node
{
	int data;
	List_node *next;
	
} ListNode;
typedef struct _linkedList
{
	ListNode *head;
	ListNode *cur;
	ListNode *before;
	int numofdata;
	int (*comp)(int d1,int d2);
} List;

void FInsert(List *plist,int data);
void ListInit(List *plist);
void LInsert(List *plist,int data);
int LFirst(List *plist,int data);
int LNext(List *plist,int data);
int LRemove(List *plist);
int LCount(List *plist);
void SetSortRule(List *plist,int (*comp)(int d1,int d2));


#endif

