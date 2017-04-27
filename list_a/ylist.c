#include <stdio.h>
#include <stdlib.h>
#include "ylist.h"

void list_error(char *message)
{
	exit(1);
}
void list_init(Arrylist *L)
{
	L->length =0;
}
int is_list_empty(Arrylist *L)
{
	return L->length == 0;
}
int is_list_full(Arrylist *L)
{
	return L->length == MAX_LIST_SIZE;
}
void list_display(Arrylist *L)
{
	int i;
	for(i=0;i<L->length;i++)
	{
		printf(" [%d]  %d\n",i,L->list[i]);
	}
}
void list_add(Arrylist *L,int position,int item)
{
	int i;
	if(!is_list_full(L)&&(position>=0)&&(position<=L->length))
	{
		for(i=(L->length);i>position;i--)
		{
			L->list[i]=L->list[i-1];
		}
		L->list[position]=item;
		L->length++;
	}
}
int list_delete(Arrylist *L,int position)
{
	int i;
	int item;
	if(position<0||position>=L->length)
		exit(1);
	item = L->list[position];
	for(i=position;i<L->length-1;i++)
	{
		L->list[i]=L->list[i+1];
	}
	L->length--;
	return item;
}
