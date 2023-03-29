#include<stdio.h>
void main()
{
	int n,f;
	printf("enter no ");
	scanf("%d",&n);
	f=m1(n);
	printf("fact is =%d",f);
	
}
int m1(int n)
{
	if (n<=1)
	return 1;
	else
	return n*m1(n-1);
}
