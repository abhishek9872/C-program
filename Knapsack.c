#include<stdio.h>
void knapsack(float p[],float w[],float ratio[],int cap,int n)
{
	float tp=0.0;
	int i;
	for(i=0;i<=n;i++)
	{
	
		if(cap<=0)
		{
			break ;
		}
		if(w<=cap)
		{
			tp = tp+p[i];
			cap -=w[i];
		}
		else
		{
			tp = tp + (p[i]*(cap/w[i]));
			cap=0;
		}
    }
}
int main()
{
	float p[10],w[10],ratio[10];
	int n,cap,i,j;
	printf("Enter number of objects in bag\n");
	scanf("%d",&n);
	printf("Enter capacity of bag\n");
	scanf("%d",&cap);
	printf("Enter profit and weight \n");
	for(i=0;i<=n;i++)
	{
		scanf("%f %f",&p[i],&w[i]);
	}
	for(i=0;i<=n;i++)
	{
		ratio[i]=p[i]/w[i];
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(ratio[i]<ratio[j])
			{
				int temp1 = ratio[j];
				ratio[j]=ratio[i];
				ratio[i]=temp1;
				
				int temp2 = p[j];
				p[j]=p[i];
				p[i]=temp2;
				
				int temp3 = w[j];
				w[j]=w[i];
				w[i]=temp3;
			}
		}
	}
	knapsack(p,w,cap,n,ratio);
	return 0;
	
}
