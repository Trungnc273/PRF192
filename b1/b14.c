#include<stdio.h>

int main()
{
	int h,i,j;
	scanf("%d",&h);
	printf("\nOUTPUT:");
	if(h>20)
		return -1;
	for(i=0;i<h;i++)
	{
		printf("\n");
		for(j=0;j<i+1;j++)
			printf("*");
	}
}
