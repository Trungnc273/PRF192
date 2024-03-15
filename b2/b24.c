#include<stdio.h>
#include<string.h>

void xoa(char a[100],int n,int k)
{
	int i;
	for(i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}

int main()
{
	char a[100],b[100];
	int c[100],i,n,j,l,m;
	printf("Input the string:");
	gets(a);
	n=strlen(a);
	for(i=0,l=0;i<n;i++)
	{
		b[l]=a[i];
		c[l]=0;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				c[l]++;
				xoa(a,n,j);
				n--;
				j--;
			}
		}
		c[l]++;
		l++;
		xoa(a,n,i);
		n--;
		i--;	
	}
	m=strlen(b);
	int max=0;
	for(i=0;i<m;i++)
	{
		if(c[i]>c[max])
			max=i;
	}
	printf("The Highest frequency of character '%c' appears number of times: %d",b[max],c[max]);
}
