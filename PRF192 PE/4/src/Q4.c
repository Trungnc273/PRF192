#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int m,n,c,i,j,t=0;
  scanf("%d",&m);
  scanf("%d",&n);
  scanf("%d",&c);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(i=m;i<=n;i++)
	{
		if(t==c)
		{
			printf("\n");
			t=0;
		}
		printf("%d ",i);
		t++;
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
