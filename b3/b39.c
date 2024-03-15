#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int n,i;
	gets(a);
	n=strlen(a);
	printf("\nOUTPUT:\n");
	for(i=0;i<n;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			printf("%c",a[i]);
	}
	printf("\n");
}
