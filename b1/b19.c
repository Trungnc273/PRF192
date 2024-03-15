#include<stdio.h>
#include<string.h>
int main()
{
	char n[100];
	int i,j,t=0,k=0,c=0;
	gets(n);
	int leng=strlen(n);
	for(i=0;i<leng;i++)
	{
		/*if(n[c]==' ')
		{
			c++;
			continue;
		}*/
		if(n[i]!=' ')
			t++;
		else
			k++;
		if(k==3)
			break;
	}
	printf("\nOUTPUT:\n%d",t);
}
