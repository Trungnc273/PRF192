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
	int a[n][n];
	for(i=0; i<n; i++) 
	{
		for(j=0; j<n; j++) 
		{
			scanf("%d",&a[i][j]);
		}
	}



	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d",a[1][1]+a[2][2]+a[0][0]);







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

