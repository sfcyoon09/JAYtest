#include <stdio.h>
#include <stdlib.h>


typedef struct _dice
{
	int Et;
	int Wt;
	int Nt;
	int St;
	int Bt;
	int Up;
} Dice;


void init_dice(Dice *d);
int dice_e(Dice *d,int **map,int x,int y);
int dice_w(Dice *d,int **map,int x,int y);
int dice_n(Dice *d,int **map,int x,int y);
int dice_s(Dice *d,int **map,int x,int y);
void show_dice(Dice *d);
int main(void)
{
	int N,M,x,y,K,op;
	int **map;
	Dice d;
	int i,j;
	scanf("%d",&N);
	scanf("%d",&M);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&K);

	map=(int**)malloc(sizeof(int*)*N);
	for(i=0;i<N;i++)
		map[i]=(int*)malloc(sizeof(int)*M);

	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%d",&map[i][j]);
		}
	}

	init_dice(&d);
	
	for(i=0;i<K;i++)
	{
		scanf("%d",&op);

		switch(op)
		{
			case 1 :
				if(x==M-1) break;
				x++;
				printf("\n%d",dice_e(&d,map,x,y));
				break;
			case 2 :
				if(x==0) break;
				x--;
				printf("\n%d",dice_w(&d,map,x,y));
				break;
			case 3 :
				if(y==0) break;
				y--;
				printf("\n%d",dice_n(&d,map,x,y));
				break;
			case 4 :
				if(y==N-1) break;
				y++;
				printf("\n%d",dice_s(&d,map,x,y));
				break;
			default :
				break;
		}
		
	}

	//free
	for(i=0;i<N;i++)
		free(map[i]);
	free(map);
	
	return 0;
}
void init_dice(Dice *d)
{
	
	d->Et=0;
	d->Wt=0;
	d->Nt=0;
	d->St=0;
	d->Bt=0;
	d->Up=0;
}
int dice_e(Dice *d,int **map,int x,int y)
{
	int temp;
	temp=d->Et;
	d->Et=d->Bt;
	d->Bt=d->Wt;
	d->Wt=d->Up;
	d->Up=temp;
	if(map[y][x]==0) map[y][x]=d->Bt;
	else 
	{
		d->Bt=map[y][x];
		map[y][x]=0;
	}
	return d->Up;
}

int dice_w(Dice *d,int **map,int x,int y)
{
	int temp;
	temp=d->Et;
	d->Et=d->Up;
	d->Up=d->Wt;
	d->Wt=d->Bt;
	d->Bt=temp;

	if(map[y][x]==0) map[y][x]=d->Bt;
	else 
	{
		d->Bt=map[y][x];
		map[y][x]=0;
	}
	return d->Up;
}

int dice_n(Dice *d,int **map,int x,int y)
{
	int temp;
	temp=d->Nt;
	d->Nt=d->Bt;
	d->Bt=d->St;
	d->St=d->Up;
	d->Up=temp;
	
	if(map[y][x]==0) map[y][x]=d->Bt;
	else 
	{
		d->Bt=map[y][x];
		map[y][x]=0;
	}
	return d->Up;
}

int dice_s(Dice *d,int **map,int x,int y)
{
	int temp;
	temp=d->Nt;
	d->Nt=d->Up;
	d->Up=d->St;
	d->St=d->Bt;
	d->Bt=temp;
	
	if(map[y][x]==0) map[y][x]=d->Bt;
	else 
	{
		d->Bt=map[y][x];
		map[y][x]=0;
	}
	return d->Up;
}

void show_dice(Dice *d)
{
	printf("Et%d ",d->Et);
	printf("Wt%d ",d->Wt);
	printf("Nt%d ",d->Nt);
	printf("St%d ",d->St);
	printf("Bt%d ",d->Bt);
	printf("Up%d ",d->Up);
}
