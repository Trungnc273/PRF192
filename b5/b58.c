//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i,j,min=0,max=0,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
		if(a[i]>a[max])
			max=i;
		if(a[i]<a[min])
			min=i;
}
t=a[max];
a[max]=a[min];
a[min]=t;


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}






  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

