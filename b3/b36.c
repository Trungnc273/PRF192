#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int i,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
			a[i]=toupper(a[i]);
	}
	printf("\nOUTPUT:\n%s\n",a);
}
