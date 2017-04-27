#include <stdio.h>
#include <stdlib.h>
#include "ylist.h"

void ListInit(List *plist)
{
	plist->head =(ListNode*)malloc(sizeof(ListNode);
	plist->head->next =NULL;
	plist->comp=NULL;
	plist->numofdata=0;
}
void SInsert(List *plist,LData data)
{
	Node *newNode =(Node*)malloc(sizeof(Node));
	Node *pred =plist->head;
	newNode->data =data;
	while(pred->next !=NULL &&plist0->comp(datampred->next->data)!=0)
	{
		pred =pred->next;
	}
	newNode ->next =pred->next;
	pred->next=newNode;
	(plist->numofdata)++;
}
void FInsert(List *plist,int data)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
	newNode->data =data;
	newNode->next=plist->head->next;
	plist->head->next=newNodei;
	(plist->numofdata)++;
}
void LInsert(List *plist,LData *pdata)
{
	if(plist->comp ==NULL) FInsert(plist,data);
	else SInsert(plist,data);
}

int LFirst(List *plist,int *pdata)
{
	if(plist->head->next==NULL)
		return 0;
	plist->before =plist->head;
	plist->cur = plist ->head->next;

	*pdata=plist->cur->data;
	return 1;
}
int LNext(List *plist,int data)
{
	if(plist->cur->next==NULL)
		return 0;
	plist->before =plist->cur;
	plist->cur = plist ->cur->next;

	*pdata=plist->cur->data;
	return 1;
}

int LRemove(List *plist)
{
	Node *rpos =plist->cur;
	LData rdata =rpos->data;

	plist ->before->next=plist->cur->next;
	plist->cur=plist->before;

	free(rpos);
	(plist->numofdata)--;
	return rdata;
}

int LCount(List *plist)
{
	return plist->numofdata;
}

void SetSortRule(List *plist,int (*comp)(int d1,int d2))
{
	plist->comp =comp;
}
int Precede(int d1,int d2)
{
	if(d1<d2) return 0;
	else return 1;
}

#endif

