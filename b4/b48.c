//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:



for(i=0;i<n;i++)
{	
	if(i!=0)
		printf(" ");
	printf("%d",a[i]);

	for(j=i+1;j<n;j++)
	{	
		if(a[i]!=a[j])
		{	
			i=j-1;
			break;
		}
	}

}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

