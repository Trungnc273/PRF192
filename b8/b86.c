//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int i,j,t=1,k;
	char a[1000];
	char b[1000];
	char c[1000];
	gets(a);
	gets(b);
	strcpy(c,b);
	strrev(c);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[0])
		{
			for(j=0,k=i;j<strlen(b);j++,k++)
			{
				if(a[k]!=b[j])
				{
					t=0;
					i=k;
					break;
				}
			}
			if(t==1)
			{
				for(j=0,k=i;j<strlen(c);j++,k++)
				{
					a[k]=c[j];
				}
				i=k;
			}
		}
	}

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	printf("%s\n",a);

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


