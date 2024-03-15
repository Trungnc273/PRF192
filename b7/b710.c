//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int fibonaci(int i)
	{
		if(i==0)
			return 0;
		else if(i==1)
			return 1;
		else return fibonaci(i-1)+fibonaci(i-2);
	}

	int n,i;
	scanf("%d",&n);

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	
	for(i=0;i<n;i++)
	{
		if(i!=0)
			printf(" ");
		printf("%d",fibonaci(i));
	}







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


