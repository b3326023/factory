
#include <stdio.h>
#include <stdlib.h>

int number(int x);

int main(int argc, char** argv) 
{
	while(1)
	{ 
	int x;
	do{
		printf("請輸入測試數目:");
		scanf("%d",&x);
		if(x<=0)
		{
			printf("請輸入大於0的數字\n");
			printf("\n");
		}
	}while(x<=0); 
	number(x);
	} 
	return 0;
}

int number(int x){
	int y,k;
	int a[50];
	
	for(int i=1;i<=x;i++)
	{
		
		k=0;
		printf("\n請輸入測試數字:");
		scanf("%d",&y);
		
		int sum=y;
	
		for(int j=9;j>1;)
		{
			if(y==1)
			{
				printf("1\n");
				break;
			}
			else if(sum%j==0)
			{
				a[k]=j;
				sum/=j;
				k++;
				if(sum==1)
				{
				break;
				}
				continue;
			}
			else
			{
				j--;
			}
		}
		if(sum!=1)
		{
				printf("%d\n",-1);
		}
		else
		{
		
		for(int q=k-1;q>=0;q--)
		{
			printf("%d ",a[q]);
			if(q==0)
			{
				printf("\n");
			}
		}
			
		
		}
	
	
	
	}
	
}
