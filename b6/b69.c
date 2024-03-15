//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() 
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	scanf("%d",&n);
	char c[n][100],t;
	for(i=0; i<n; i++) 
	{
		scanf("%s",c[i]);
	}
	scanf(" %c",&t);


	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<n; i++) 
	{
		if(c[i][0]==t)
			printf("%s\n",c[i]);
	}







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

