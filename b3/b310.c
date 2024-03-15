#include<stdio.h>

int kt(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("\nOUTPUT:\n");
	if(n==kt(n))
		printf("%d is a perfect number",n);
	else
		printf("%d is not a perfect number",n);
}
