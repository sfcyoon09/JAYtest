#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int N,M,result,ch;
	int i,j;
	char **map;
	scanf("%d",&N);
	scanf("%d",&M);
	map=(char**)malloc(sizeof(char*)*N);
	for(i=0;i<N;i++)
	{
		map[i]=(char*)malloc(sizeof(char)*M+1);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)	map[i][j]=0;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M+1;j++)
		{
			scanf("%s",&map]);
			printf("%c",map[i][j]);			
		}
	}
	printf("\n");

//	printf("%d",result);
	for(i=0;i<N;i++)
	{
		free(map[i]);
	}
	free(map);
	return 0;
}
