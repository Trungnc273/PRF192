#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int i,n,o1=0,o2=0,o3=0;
	printf("Input the string: ");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			o1++;
		else if(a[i]>='0'&&a[i]<='9')
			o2++;
		else
			o3++;
	}
	printf("Number of Alphabets is: %d\n",o1);
	printf("Number of Digits is: %d\n",o2);
	printf("Number of Special characters is: %d",o3);
}
