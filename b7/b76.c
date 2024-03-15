//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	char c[100];
	int i;
	gets(c);
	
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	for(i=0;i<strlen(c);i++)
	{
		if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')||c[i]==' ')
			printf("%c",c[i]);	
	}






	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


