#include <stdio.h>
#include <string.h>
#define LENGTH  100
typedef struct astack
{
    int stack_d[LENGTH];
    int topIndex;
} astack;

void stackInit(astack *);
int is_stack_empty(astack *);
void spush(astack *,int);
int spop(astack *);
int stop(astack *);
int ssize(astack *);

int main(void)
{
    int i,N,X;
    char string[10];
    astack pstack;
    stackInit(&pstack);
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%s",string);
        if(!strcmp(string,"push"))
        {
           scanf("%d",&X);
           spush(&pstack,X);
        }
        else if(!strcmp(string,"pop"))
        {
	        printf("%d",spop(&pstack));
	    }
        else if(!strcmp(string,"size"))
        {
	        printf("%d",ssize(&pstack));
        }
        else if(!strcmp(string,"empty"))
        {
            printf("%d",is_stack_empty(&pstack));
        }
        else if(!strcmp(string,"top"))
        {
	        printf("%d",stop(&pstack));
        }
        else
		    return -1;

		printf("\n");
    }
	return 0;
}
void stackInit(astack * pstack)
{
    pstack->topIndex=-1;
}

																																																																			int is_stack_empty(astack * pstack)
																																																																			{
																																																																			    if(pstack->topIndex==-1)
																																																																				    {
																																																																					        return 1;
																																																																							    }else return 0;
																																																																								}

																																																																								void spush(astack * pstack,int data)
																																																																								{
																																																																								    pstack->topIndex+=1;
																																																																									    pstack->stack_d[pstack->topIndex]=data;
																																																																										}

																																																																										int spop(astack * pstack)
																																																																										{
																																																																										    int index;
																																																																											    if(is_stack_empty(pstack))
																																																																												    {
																																																																													        return -1;
																																																																															    }
																																																																																    index=pstack->topIndex;
																																																																																	    pstack->topIndex-=1;
																																																																																		    return pstack->stack_d[index];
																																																																																			}

																																																																																			int stop(astack * pstack)
																																																																																			{
																																																																																			    int index;
																																																																																				    if(is_stack_empty(pstack))
																																																																																					    {
																																																																																						        return -1;
																																																																																								    }
																																																																																									    index=pstack->topIndex;
																																																																																										    return pstack->stack_d[index];
																																																																																											}

																																																																																											int ssize(astack *pstack)
																																																																																											{
																																																																																											    return (pstack->topIndex)+1;
																																																																																												}

