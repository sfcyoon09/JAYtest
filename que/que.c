#include<stdio.h>
#define LENGTH 10
typedef struct _queue
{
	int Qu[LENGTH];
	int top;
	int re;
}Que;


int Nextpos(int pos);
void init_queue(Que *q);
int is_queue_full(Que *q);
int is_queue_empty(Que *);
void en_queue(Que *q,int data);
int de_queue(Que *q);




int main(void)
{
	Que q;
	init_queue(&q);
	en_queue(&q,1);
	en_queue(&q,2);
	en_queue(&q,3);
	en_queue(&q,4);
	en_queue(&q,5);
	en_queue(&q,6);
	en_queue(&q,7);
	en_queue(&q,8);
	en_queue(&q,9);
	de_queue(&q);
	de_queue(&q);
	de_queue(&q);
	de_queue(&q);
	en_queue(&q,10);
	en_queue(&q,11);
	while(!is_queue_empty(&q))
	{
		printf("%d\n",de_queue(&q));
	}

	return 0;
}




int Nextpos(int pos)
{
	if(pos==LENGTH-1) return 0;
	else return pos+1;
	
}
void init_queue(Que *q)
{
	q->top=0;
	q->re=0;
}
int is_queue_full(Que *q)
{
	if(Nextpos(q->re)==q->top) return 1;
	else return 0;
}
int is_queue_empty(Que *q)
{	
	if((q->re==q->top)) return 1;
		else return 0;
}
void en_queue(Que *q,int data)
{
	if(is_queue_full(q))
	{
		printf("full\n");
	}else
	{
		q->re=Nextpos(q->re);
		q->Qu[q->re]=data;
	}
}
int de_queue(Que *q)
{
	int temp;
	if(is_queue_empty(q))
	{
		printf("empty\n");
	}else
	{	
		q->top=Nextpos(q->top);
		temp=q->Qu[q->top];
		return temp;
	}
}

