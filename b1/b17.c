#include<stdio.h>

void xoa(char a[19], int n, int k)
{
	int i;
	for(i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}

int main()
{
	char m[19],a[19],m1,m2;
	int b[19],i,j,n,l,b1,b2,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
	}
	for(i=0,l=0;i<n;i++)
	{
		m[l]=a[i];
		b[l]=0;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				b[l]++;
				xoa(a,n,j);
				n--;
				j--;
			}
		}
		b[l]++;
		xoa(a,n,i);
		n--;
		i--;
		l++;
	}
	m1=m[0];
	m2=m[1];
	b1=b[0];
	b2=b[1];
	for(i=2;i<l;i++)
	{
		if(b[i]>b1||b[i]>b2)
		{	
			if(t==0)
			{
				b2=b[i];
				m2=m[i];
				t++;
			}
			else
			{
				b1=b2;
				b2=b[i];
				m1=m2;
				m2=m[i];
				t++;
			}
		}
	}
	printf("\nOUTPUT:\n");
	if(b1>1)
		printf("%c\n",m1);
	if(b2>1)
		printf("%c",m2);
}
