//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char a[8];
int k=0,i;
gets(a);
int n=strlen(a);
for(i=n-1;i>=0;i--)
{	
if(k==0&&a[i]=='0')
		continue;
	else if(k==0&&a[i]=='1')
	{
		k=1;
		continue;
	}
	else if(k==1)
	{
		if(a[i]=='0')
			a[i]='1';
		else
			a[i]='0';
	}
} 
 
 
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

printf("%s\n",a);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

