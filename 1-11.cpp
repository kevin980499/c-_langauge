#include<stdio.h>
#include<stdlib.h>
int aa(int a)
{
	if(a>2)
	return aa(a-1)+aa(a-2);
	else
	return 1;
}
int main()
{
	int n,l,m;
	while(scanf("%d",&n)!=EOF)
	{
		l=aa(n);
		m=aa(n+1);
		printf("%d:%d\n",l,m);
	}
}
