/*
 정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

*/
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
    setbuf(stdout, NULL);
    int test_case,N,X,result;
    char string[20];
    astack pstack;
    stackInit(&pstack);
    scanf("%d",&N);
    for(test_case=1;test_case<=N;test_case++)
    {

        scanf("%s",string);
        if(!strcmp(string,"pop"))
        {
            result=spop(&pstack);
        }
        else if(!strcmp(string,"size"))
        {
            result=ssize(&pstack);
        }
        else if(!strcmp(string,"empty"))
        {
            result=is_stack_empty(&pstack);
        }
        else if(!strcmp(string,"top"))
        {
            result=stop(&pstack);
        }
		printf("%d",result);
        if(!strcmp(string,"push"))
        {
            scanf("%d",&X);
            spush(&pstack,X);
        }
    }
    return 0;
}

void stackInit(astack *pstack)
{
    pstack->topIndex=-1;
}

int is_stack_empty(astack *pstack)
{
    if(pstack->topIndex==-1)
    {
        return 1;
    }else return 0;
}

void spush(astack *pstack,int data)
{
    pstack->topIndex+=1;
    pstack->stack_d[pstack->topIndex]=data;
}

int spop(astack *pstack)
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

int stop(astack *pstack)
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
