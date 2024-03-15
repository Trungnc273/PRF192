#include<stdio.h>

int main()
{
	int a[5],i,j,t;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nOUTPUT:");
	
	for(i=0;i<4;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;	
			} 
		}
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
			printf("\n%d",a[i]);
	}
}
