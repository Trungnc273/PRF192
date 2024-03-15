#include<stdio.h>

int main()
{
	int a,i,j;
	scanf("%d",&a);
	printf("\nOUTPUT:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
}
