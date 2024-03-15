#include<stdio.h>

int main()
{
	int a[5],i,max=-1;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0&&a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nOUTPUT:\n%d",max);
}
