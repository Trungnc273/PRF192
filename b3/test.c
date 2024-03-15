//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i,j;
scanf("%d",&n);

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

for(i=0;i<n;i++)
{
	for(j=0;j<n*2-1;j++)
	{
		if(j==n-1||j<=n-1+i&&j>=n-1-i)
			printf("*");
		else
			printf(" ");
	}
	printf("\n");
}
for(i=0;i<n;i++)
{
	for(j=0;j<n*2-1;j++)
	{
		if(j>=i&&j<n*2-1-i)
			printf("*");
		else
			printf(" ");
	}
	printf("\n");
}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


