#include<stdio.h>
int main()
{
	int cost[10][10],path[10][10],n,p,v,index=1,row,col,min;
	int i,j;
	printf("Enter number of nodes\n");
	scanf("%d",&n);
	printf("Enter cost matrix \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	printf("Enter number of paths \n");
	scanf("%d",&p);
	
	printf("Enter path matrix \n");
	for(i=1;i<=p;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&path[i][j])
		}
	}
	
}
