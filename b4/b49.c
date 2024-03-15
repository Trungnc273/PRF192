//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i;
char t;
scanf("%d",&n);
char a[n][100];
for(i=0;i<n;i++)
{
	scanf("%s",&a[i]);
}
scanf(" %c",&t);



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for(i=0;i<n;i++)
{
	if(a[i][0]==toupper(t)||a[i][0]==tolower(t))
	{
		printf("%s\n",a[i]);
	}
}






  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

