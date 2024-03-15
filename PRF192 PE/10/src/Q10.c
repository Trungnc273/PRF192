#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  	int n,i,j,t,k=0;
 	 scanf("%d",&n);
  	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(i=n-1;i>2;i--)
  	{
  		if(k==4)
  			break;
  		t=1;
  		for(j=2;j<i;j++)
  		{
  			if(i%j==0)
			{
		 		t=0;
		 		break;
			}	
		}
		if(t==1)
		{
			k++;
			printf("%d\n",i);
		}
  	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
