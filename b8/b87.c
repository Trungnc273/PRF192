//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int a[7],i,j,k,b[7]={0},c[7]={0},t,max=0,d=0;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		t=0;
		if(a[i]>=10&&a[i]<=99)
		{
			for(k=0;k<=d;k++)
			{
				if(a[i]==b[k])
				{
					t=1;
					c[k]++;
				}		
			}
			if(t==0)
			{
				b[d]=a[i];
				c[d]++;
				d++;
			}
		}	
	}
	for(i=0;i<d;i++)
	{
		if(max<c[i])
			max=c[i];
	}
	
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	
	if(max>0)
	{
		for(i=0;i<d;i++)
		{
			if(c[i]==max)
				printf("%d ",b[i]);
		}
	}
	else
		printf("no two-digit number");

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


