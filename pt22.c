//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	char s[]="518512958851295341";
	void checkpalindrome(char s[])
	{
		int i;
		int k=0;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]!=s[strlen(s)-1-i])
			{
				k=1;
				break;	
			}	
		}
		if(k==0)
			printf("true");
		else
			printf("false");	
	}
	void soxuathiennhieu(char s[])
	{
		int i,j;
		int max=0;
		int a[10]={0};
		for(i=0;i<=9;i++)
		{
			for(j=0;j<strlen(s);j++)
			{
				if(s[j]-48==i)
					a[i]++;
			}
		}
		for(i=0;i<=9;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		for(i=0;i<=9;i++)
		{
			if(a[i]==max)
			{
				printf("%d, %d",i,max);
				break;
			}
		}
	}
	

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	checkpalindrome(s);
	soxuathiennhieu(s);







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


