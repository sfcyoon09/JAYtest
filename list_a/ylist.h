#ifndef __LIST_H__
#define __LIST_H__



#define MAX_LIST_SIZE	100

typedef struct Arrylist{
	int list[MAX_LIST_SIZE];
	int length;
} Arrylist;

void list_error(char *message);
void list_init(Arrylist *);
int is_list_empty(Arrylist *);
int is_list_full(Arrylist *);
void list_display(Arrylist *);
void list_add(Arrylist *,int position,int item);
int list_delete(Arrylist *,int position);


#endif

