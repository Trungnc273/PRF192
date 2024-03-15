//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,tong=0,i;
scanf("%d",&n);
for(i=1;i<n;i++)
{
	if(n%i==0)
	{
		tong+=i;
	}
}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
if(n==tong)
	printf("%d is a perfect number",n);
else
	printf("%d is not a perfect number",n);







  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

