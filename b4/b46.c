//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char a[100];
int sum=0,i,n;
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
	if(a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]==8)
	{
		sum+=a[i]-48;
	}
}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


printf("%d",sum);





  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

