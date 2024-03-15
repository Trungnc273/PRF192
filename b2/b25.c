#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],t;
	int i,j,n;
	printf("Input the string: ");
	gets(a);
	n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("After sorting the string appears like: %s",a);
}
