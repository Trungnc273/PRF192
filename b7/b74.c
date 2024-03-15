//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() 
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int n,i,j,t,k=2,l;
	scanf("%d",&n);

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	for(i=0; i<n; i++) 
	{
		for(j=0; j<n-i; j++) 
		{
			if(j!=0)
				printf(" ");
			if(k>3) 
			{
				for(l=2; l<k; l++) 
				{
					if(k%l==0) 
					{
						k++;
						l=2;
						continue;
					}
				}
			}
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

