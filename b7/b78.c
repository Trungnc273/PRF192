//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int n,i,j,t;
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
		t=1;
		if(i==0)
		{
			printf("%d",a[i]);
			continue;
		}
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				t=0;
				break;
			}
		}
		if(t==1)
			printf(" %d",a[i]);
	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


