#include<stdio.h>

int main()
{
	int n,a[20],i,m1,m2;
	printf("Input the size of array : ");
	scanf("%d",&n);
	printf("Input %d elements in the array (value must be <9999):\n",n);
	for(i=0;i<n;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&a[i]);
	}
	if(a[0]>=a[1])
	{
		m2=a[0];
		m1=a[1];
	}
	else
	{
		m2=a[1];
		m1=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]<m1)
		{
			m2=m1;
			m1=a[i];	
		}
		else if(a[i]<m2&&a[i]>m1)
			m2=a[i];
		
	}
	printf("Expected Output:\nThe Second smallest element in the array is : %d",m2);
}
