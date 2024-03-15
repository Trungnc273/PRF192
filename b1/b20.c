#include<stdio.h>

int kt(int a)
{
	int i;
	if(a<2)
		return 0;
	else if(a==2)
		return 1;
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
				return 0;
		}
		return 1;
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("\nOUTPUT:\n");
	if(kt(a)==1)
		printf("0x%X",a);
	else
		printf("%d is not a prime number",a);
}
