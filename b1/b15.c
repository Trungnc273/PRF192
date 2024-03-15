#include<stdio.h>

void xoa(int a[9],int k,int n)
{
	int i;
	for(i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}

int main()
{
	int a[9],i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]%2!=0)
		{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				xoa(a,j,n);
				j--;
				n--;
			}
		}
		}
	}
	printf("\nOUTPUT:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
