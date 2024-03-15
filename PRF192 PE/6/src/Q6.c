#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  	char s[1000];
  	gets(s);
  	int t=0,i;
  	char c;
  	scanf(" %c",&c);
  	
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  	
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==c)
			t++;
	}
	if(t==0)
	{
		printf("Character '%c' not found",c);
	}
	else
		printf("%d",t);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
