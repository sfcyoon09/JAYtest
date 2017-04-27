#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int N,blockd,i,j;
	int **board;
	scanf("%d",&N);
	board=(int**)malloc(sizeof(int*)*N);
	for(i=0;i<N;i++) board[i]=(int*)malloc(sizeof(int)*N);


	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&board[i][j]);
		}
	}
	
	//printf("%d",result);
	for(i=0;i<N;i++) free(board[i]);
	free(board);
	return 0;
}

int start_game(int **b)
{	
	int res[4]={0,};
	int count;
	int *cp

}
int b_shift(int **b,int *count,int dir)
{
	int i,j;
	int result=0;
	int res[4]={0,};
	count++;
	
	if(count<6)
	{
		for(i=0;i<4;i++) res[i]=b_shift(b,&count,i);
	}
	switch(dir)
	{
		case 0 : //r
		for(i=0;i<=N;i++)
		{
			int new_cursor=1;
			int *check;
			check=(int)malloc(sizeof(int)*(N+2));
		 	for(
		}
		break;
		case 1 : //l
		
		break;
		case 2 : //u
		
		break;
		case 3 : //d
		
		break;
		default :
		break;
	}

	return result;
}

int who_is_max(int *res,int cnt)
{
	int i,MAX;
	MAX=res[0];
	for(i=1;i<cnt;i++)
	{
		if(MAX<res[i]) MAX=res[i];
	}
	return MAX;
}
