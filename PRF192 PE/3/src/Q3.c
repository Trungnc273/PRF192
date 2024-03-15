#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n,i,j,t=0,k;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
for(i=0;i<n;i++)
  {
  	k=1;
  	if(a[i]<2)
  		continue;
  	else if(a[i]==2)
  	{
  		t=1;
		printf("%d ",a[i]);
	}
	else
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				k=0;
				break;
			}
		}
		if(k==1)
			{
				printf("%d ",a[i]);
				t=1;
			}
			
	}
	
  }
  if(t==0)
		printf("No prime number exists");






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
