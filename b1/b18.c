#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int c=log2(n);
	printf("\nOUTPUT:\n");
	if(pow(2,c)==n)
		printf("%d",c);
	else
		printf("%d is not a power of 2",n);
}
