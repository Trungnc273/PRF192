#include<stdio.h>

int main()
{
	int a[6],i,sum=0;
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			sum+=a[i];
	}
	printf("\nOUTPUT:\n%d",sum);
}
