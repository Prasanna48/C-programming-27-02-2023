#include<stdio.h>
int main()
{
	long int n;
	int s=0,r;
	scanf("%ld",&n);
	while(n/10!=0)
	{
		s=0;
		while(n!=0)
		{
			r=n%10;
			s+=r;
			n=n/10;
		}
		n=s;
	}
	printf("%d",s);
}

