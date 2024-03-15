//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j;
	float a[5],t;
	for(i=0;i<5;i++)
	{
		scanf("%f",&a[i]);

	}
	
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(i==4)
				break;
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		if(i!=0)
			printf(" ");
		printf("%.6f",a[i]);
	}







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


