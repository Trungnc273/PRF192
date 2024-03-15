#include<stdio.h>

int main()
{
	int n,a[100],i,max,min,sum=0;
	printf("Enter N = ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
		sum+=a[i];
	}
	if(min!=max)
	{	
	printf("Maximum value of the element in array: %d\n",max);
	printf("Minimum value of the element in array: %d\n",min);
	}
	printf("Sum the elements in array: %d",sum);
}
