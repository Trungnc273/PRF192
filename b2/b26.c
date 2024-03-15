#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int i,n,t,k;
	printf("Input the string: ");
	gets(a);
	n=strlen(a);
	printf("Input the position to start extraction: ");
	scanf("%d",&t);
	printf("Input the length of substring: ");
	scanf("%d",&k);
	printf("The substring retrieve from the string is: ");
	for(i=t-1;i<t+2;i++)
	{
		printf("%c",a[i]);
	}
}
