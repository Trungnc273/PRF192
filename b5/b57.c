//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i,j,t,k=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
scanf("%d",&t);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]+a[j]==t)
		{
			printf("%d\n%d",i,j);
			k=1;
		}
	}
	if(k==1)
		break;
}







  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

