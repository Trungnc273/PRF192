#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n,i,j,x,y,t;
  scanf("%d",&n);
  int a[n],b[n],c[n];
  for(i=0,x=0,y=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  		if(a[i]%2==0)
  			b[x++]=a[i];
  		else
  			c[y++]=a[i];
  }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
for(i=0;i<x;i++)
  {
  	for(j=i+1;j<x;j++)
  	{
  		if(i==x-1)
  			break;
  		if(b[i]>b[j])
  		{
  			t=b[i];
  			b[i]=b[j];
  			b[j]=t;
		}
	}
	printf("%d ",b[i]);
  }
  printf("\n");
  for(i=0;i<y;i++)
  {
  	for(j=i+1;j<y;j++)
  	{
  		if(i==y-1)
  			break;
  		if(c[i]<c[j])
  		{
  			t=c[i];
  			c[i]=c[j];
  			c[j]=t;
		}
	}
	printf("%d ",c[i]);
  }






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
