#include<stdio.h>

int main()
{
	int n,a[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			printf("%d\n",a[i]*a[i]);
	}
}
