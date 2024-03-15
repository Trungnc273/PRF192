//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char c[100];
int i,n;
gets(c);
n=strlen(c);
for(i=0;i<n;i++)
{
	if(c[0]!=' ')
	{
		c[0]=toupper(c[0]);
		c[1]=toupper(c[1]);
	}
	if(c[i-1]==' '&&c[i]!=' ')
	{
		c[i]=toupper(c[i]);
		c[i+1]=toupper(c[i+1]);
	}
}


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

printf("%s",c);






  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

