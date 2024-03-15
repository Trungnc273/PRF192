//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n,i,k,t,sum,j;
	scanf("%d",&n);

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	for(i=2; i<n; i++) 
	{
		sum=0;
		k=1;
		t=i;
		while(t>0) 
		{
			sum+=t%10;
			t/=10;
		}
		if(sum==2)
			printf("%d\t",i);
		else if(sum<2)
			continue;
		else {
			for(j=2; j<sum; j++) 
			{
				if(sum%j==0) 
				{
					k=0;
					break;
				}
			}
			if(k==1)
				printf("%d\t",i);
		}
	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


