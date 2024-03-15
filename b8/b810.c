//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int n,t=1,i;
	scanf("%d",&n);	
	if(n<2)
	{
		t=0;
	}
	else if(n>2)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				t=0;
				break;
			}
		}
	}
	
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	if(t==1)
		printf("Not Prime");
	else
		printf("Prime");

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


