#include<stdio.h>

int main()
{
	int n,a[1000],i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		if(a[i]%2!=0)
				printf("%d\n",a[i]);
	}
}
