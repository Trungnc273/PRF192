#include<stdio.h>
#include<math.h>
int main()
{
	int n,k;
	scanf("%d",&n);
	k=log2(n);
	printf("\nOUTPUT:\n");
	if(pow(2,k)==n)
	{
		printf("%d",k);
	}
	else
		printf("%d is not a power of 2",n);
	
}
