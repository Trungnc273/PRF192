//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[100]={9,6,5,3,1,6,6,3,5,4,8,5,6,6,2,1,5,8,5,6,5,4};
	int n=22;
	int i;
	float tinhtrungbinh(int a[],int n)
	{
		int i;
		float average=0;
		int sum=0;
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		average=sum*1.0/n;
		return average; 
	}
	
	void themphantu(int a[],int *n,int c)
	{
		a[*n]=c;
		(*n)++;
	}
	
	void xoaphantu(int a[],int n, int k)
	{
		int i=0;
		for(i=k;i<n;i++)
		{
			a[i]=a[i+1];
		}
	}
	
	void xoaphantugiatri5(int a[],int *n)
	{
		int i=0;
		for(i=0;i<*n;i++)
		{
			if(a[i]==5)
			{
				xoaphantu(a,*n,i);
				(*n)--;
			}
		}
	}
	
	void daonguoc(int a[],int n)
	{
		int b;
		int i;
		for(i=0;i<n/2;i++)
		{
			b=a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=b;
		}
	}

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	tinhtrungbinh(a,n);
	themphantu(a,&n,8);
	xoaphantugiatri5(a,&n);
	daonguoc(a,n);


	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


