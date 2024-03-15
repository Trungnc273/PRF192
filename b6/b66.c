//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() 
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int i,n;
	char c[1000];
	gets(c);
	n=strlen(c);
	for(i=0; i<n; i++) 
	{
		if(islower(c[i])!=0)
			c[i]=toupper(c[i]);
		else
			c[i]=tolower(c[i]);
	}
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	puts(c);







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

