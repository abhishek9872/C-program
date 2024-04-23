#include<stdio.h>
void quicksort(int a[],int low,int high)
{
	int s,e;
	s=low;
	e=high;
	int m=(s+e)/2;
	int pivot=a[m];
	if(low>=high)
	return ;
	while(s<=e)
	{
		while(a[s]<pivot)
		{
			s++;
		}
		while(a[e]>pivot)
		{
			e--;
		}
		if(s<=e)
		{
			int temp = a[s];
			a[s]=a[e];
			a[e]=temp;
			s++;
			e--;
		}
		quicksort(a,low,e);
		quicksort(a,s,high);
		
	}
}
int main()
{
	int n,i;
	printf("enter array size \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("after sorting...\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
