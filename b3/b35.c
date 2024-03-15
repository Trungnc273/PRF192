#include<stdio.h>

void xoa(int a[10],int n,int k)
{
	int i;
	for(i=k-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}

int main()
{
	int n,a[10],k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	printf("\nOUTPUT:\n");
	xoa(a,n,k);
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
