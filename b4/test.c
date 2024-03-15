#include<stdio.h>
#include<math.h>

int main() {
	unsigned long long n,a[100]= {0},t,k,l,x,y;
	long long i;
	scanf("%llu",&n);
	t=n;
	x=0;
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
		y=i;
		n--;
	while(n>0) 
	{
	unsigned long long b[100]= {0};
	x=0;
	t=n;
		while(t>0) 
		{
			for(i=x,k=n*(t%10); k>0; i++) 
			{
				b[i]+=k%10;
				k/=10;
			}
			x++;
			t/=10;
		}
		l=i;
		for(i=0; i<l; i++) 
		{
			b[i+1]+=b[i]/10;
			b[i]%=10;
		}
		for(i=0; i<=l; i++) 
		{
			a[i]+=b[i];
		}
		for(i=0; i<=y; i++) 
		{
			if(a[y]>=10)
				y++;
			a[i+1]+=a[i]/10;
			a[i]%=10;
		}
		n--;
	}
	for(i=y; i>=0; i--) 
		{
			if(i==y&&a[y]==0)
				continue;
			printf("%d",a[i]);
		}

}
