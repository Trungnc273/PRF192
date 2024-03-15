#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n,i;
	scanf("%d",&n);
	char c[n][100],t[100];
	for(i=0; i<n; i++) 
	{
		scanf("%s",c[i]);
	}
	scanf("%s",t);
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(i=0; i<n; i++) 
	{
		if(strstr(c[i],t)!=0)
			printf("%s\n",c[i]);
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
