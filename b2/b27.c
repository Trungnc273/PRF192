#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100][20],m1[20],m2[20];
	int n,c[100][20],i,l=0,m=0;
	printf("Input the string: ");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			b[l][m]='\0';
			l++;
			m=0;
			continue;
		}
		else
		{
			b[l][m]=a[i];
			m++;		
		}
	}
	strcpy(m1,b[0]);
	strcpy(m2,b[0]);
	for(i=0;i<l+1;i++)
	{
		if(strlen(m1)<strlen(b[i]))
			strcpy(m1,b[i]);
		if(strlen(m2)>strlen(b[i]))
			strcpy(m2,b[i]);
	}
	printf("The largest word is: %s\n",m1);
	printf("The smallest word is: %s",m2);
}
