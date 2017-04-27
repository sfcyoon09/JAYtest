#include <stdio.h>
#include "ylist.h"


int main(void)
{
	Arrylist list1;
	//Arrylist *p;
	//p=(Arrylist*)malloc(sizeof(Arrylist));

	list_init(&list1);
	
	list_add(&list1,0,10);
	list_add(&list1,1,10);
	list_add(&list1,2,20);
	list_add(&list1,3,30);
	list_add(&list1,4,40);
	list_add(&list1,1,50);
	list_delete(&list1,2);
	list_delete(&list1,4);
	list_display(&list1);
	//free(p);
}


