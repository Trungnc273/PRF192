//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

int n,i,j,a,k=1;
scanf("%d",&n);



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for(i=0;i<n;i++)
{
	a=65;
	for(j=0;j<k;j++)
	{
		printf("%c",a);
		if(j<k/2)
			a++;

		else
			a--;
	}
	k+=2;
	printf("\n");
}






  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

