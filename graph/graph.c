#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENG 100
typedef struct _graph
{
	int v_num;
	int **graph;
}Mgraph;
typedef struct _stack
{
	int stackArr[LENG];
	int top;
}STACK;

void init_stack(STACK *s);
int is_stack_empty(STACK *s);
void spush(STACK *s,int data);
int spop(STACK*s);
void init_graph(Mgraph *pg, int length);
void edge_set(Mgraph *pg,int st,int dst);
void print_graph(Mgraph *pg);
void free_graph(Mgraph *pg);

int main(void)
{
	Mgraph pg;
	int *visit_info;
//visit_info mamory allocation start
	init_graph(&pg,5);
	edge_set(&pg,0,1);
	edge_set(&pg,0,2);
	edge_set(&pg,0,3);
	edge_set(&pg,1,2);
	edge_set(&pg,1,4);
	edge_set(&pg,2,3);
	edge_set(&pg,3,4);
	print_graph(&pg);
	free_graph(&pg);
	return 0;
}
void init_graph(Mgraph *pg, int length)
{
	int i;
	pg->v_num=length;
	pg->graph=(int**)malloc(sizeof(int*)*length);
	for(i=0;i<length;i++)
	{
		pg->graph[i]=(int*)malloc(sizeof(int)*length);
		memset(pg->graph[i],0,sizeof(int)*length);
	}
}
void edge_set(Mgraph *pg,int st,int dst)
{
	pg->graph[st][dst]=1;
	pg->graph[dst][st]=1;
}

void print_graph(Mgraph *pg)
{
	int i,j;
	for(i=0;i<pg->v_num;i++)
	{
		printf("%c  ",i+65);
		for(j=0;j<pg->v_num;j++)
		{
			if(pg->graph[i][j]==1)	printf("%c  ",j+65);
		}
		printf("\n");
	}
}
void free_graph(Mgraph *pg)
{
	int i;
	for(i=0;i<pg->v_num;i++) free(pg->graph[i]);
	free(pg->graph);
}

void init_stack(STACK *s)
{
	s->top -1;
}
int is_stack_empty(STACK *s)
{
	if(s->top==-1) return 1;
	return 0;
}
void spush(STACK *s,int data)
{
	if(s->top==LENG-1) return;
	s->top++;
	s->stackArr[s->top]=data;
}
int spop(STACK *s)
{	
	int temp;
	if(is_stack_empty) return -1;
	temp=s->stackArr[s->top];
	s->top--;
	return temp;
}

