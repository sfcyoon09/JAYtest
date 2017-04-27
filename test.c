#include <stdio.h>
//#include <stdlib.h>

int main(void)
{
	int arr[3][5]={{0,2,4,4,8},
				   {0,4,4,2,2},
				   {0,4,4,4,8}};	
	int i,j,k,l,sc;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i][j]!=0)
			{
				for(k=j+1;k<5;k++)
				{
					if(arr[i][k]!=0&&(arr[i][j]==arr[i][k]))
					{
						arr[i][k]=0;
						arr[i][j]=arr[i][j]*2;
						break;
					}
				}
			}
		}
	}
	for(i=0;i<3;i++)
	{
		
		for(j=1;j<5;j++)
		{	
			if(arr[i][j-1]==0)
			{	
				for(k=j;k<5;k++)
				{
					arr[i][k-1]=arr[i][k];
					arr[i][k]=0;
				}
			}
		}
	}
/*
	for(i=2;i>=0;i--)
	{
		for(j=4;j>=0;j--)
		{
			if(arr[i][j]!=0)
			{
				for(k=j-1;k>=0;k--)
				{
					if(arr[i][k]!=0&&(arr[i][j]==arr[i][k]))
					{
						for(l=k-1;l>=0;l--)
						{
							arr[i][l+1]=arr[i][l];
							arr[i][l]=0;
						}
						arr[i][j]=arr[i][j]*2;
						break;
					}
				}
			}
		}
	}*/

	for(i=0;i<3;i++)
	{	
		for(j=0;j<5;j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;

}
