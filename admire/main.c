//시험장의 개수 N <=100000
//각 시험장 당 응시자의 수 A <= 1000000
//최대 응시자의 수 10 ^12

#include<stdio.h>

int main(void)
{
	int N,B,C;
	int i,temp;
	int A[1000000]={0,};
	unsigned long t_result=0;
	scanf("%d",&N);
	
	for(i=0;i<N;i++) scanf("%d",&A[i]);
	
	scanf("%d",&B);
	scanf("%d",&C);
	
	for(i=0;i<N;i++)
	{
		if(A[i]<=B) 
		{	
			A[i]=0;
			t_result++;
		}
		else{ 
				A[i]=A[i]-B;
			    t_result++;

				temp=A[i]/C;
				if(A[i]%C==0) t_result=t_result + temp;
				else t_result = t_result + temp + 1;

			}

	}

	printf("%d",t_result);
	return 0;
}
