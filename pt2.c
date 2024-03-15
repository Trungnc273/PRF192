//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[100]={1,5,4,1,4,5,7,4,2,4,5,6,5,4,6,8};
	int n=16;
	int i;
	void sapxep(int a[],int n)
	{
		int i;
		int j;
		int c;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}
			}
		}
	}
	int max2(int a[], int n)
	{
		int i;
		int max1=-999;
		int max2=-999;
		for(i=0;i<n;i++)
		{
			if(a[i]>max1)
				max1=a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>max2&&a[i]!=max1)
				max2=a[i];
		}
		return max2;
	}
	void unique(int a[], int n)
	{
		int i;
		int j;
		for(i=0;i<n;i++)
		{
			int k=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j]&&i!=j)
					k=1;
			}
			if(k==0)
			printf("%d ",a[i]);
		}
	}




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	sapxep(a,n);
	max2(a,n);
	unique(a,n);







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


