#include<stdio.h>
#include<math.h>

int main() {
	unsigned long long n,a[100]= {0},t,k,l,x,y;
	long long i;
	scanf("%llu",&n);
	x=0;
	t=n-1;
	while(t>0) 
	{
		for(i=x,k=n*(t%10); k>0; i++) 
		{
			a[i]+=k%10;
			k/=10;
		}
		x++;
		t/=10;
	}
	l=i;
	for(i=0; i<l; i++) 
	{
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	n--;
	while(n>1)
	{
		x=0;
		t=n-1;
		for(i=x;i<l;i++)
		{
			a[i]*=t%10;
			t/=10;
		}
		l=i;
		for(i=0; i<l; i++) 
		{
			a[i+1]+=a[i]/10;
			a[i]%=10;
		}
		x++;
		while(t>0)
		{
			for(i=x;i<l;i++)
			{
				
			}
		}
		
		n--;
	}
	l=i;
	for(i=l; i>=0; i--)
		{
			if(i==l&&a[l]==0)
				continue;
			printf("%d",a[i]);
		}

}
