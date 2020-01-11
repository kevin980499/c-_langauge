#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,l,m,a,b,c;
	while(scanf("%d",&n)!=EOF)
	{
		a=b=1;
		for(int i=3;i<=n;i++)
		{
			c=b+a;
			a=b;
			b=c;
		}
		l=c;
		a=b=1;
		for(int i=3;i<=n+1;i++)
		{
			c=b+a;
			a=b;
			b=c;
		}
		m=c;
		printf("%d:%d\n",l,m);
	}
}
