//Programming Fundamentals (PRF192)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n,i,j=0,k=0;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			b[j++]=a[i];
		else
			c[k++]=a[i];
	}

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<j; i++) {
		printf("%d ",b[i]);
	}
	printf("\n");
	for(i=0; i<k; i++) {
		printf("%d ",c[i]);
	}
	printf("\n");
	


	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

