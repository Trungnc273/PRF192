//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

int n,i;
scanf("%d",&n);
float a[n],sum=0;
for(i=0;i<n;i++)
{
	scanf("%f",&a[i]);
	sum+=a[i];
}


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

printf("%.3f",sum/n);






  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

