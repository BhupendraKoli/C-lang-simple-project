#include<stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("enter any no");
	scanf
("%d",&n);
	fact=factorial(n);
	printf("fact value =%d",fact);
	return 0;
}
int factorial(int x)
{
	int f=1,i;
	for(i=x;i>=1;i--)
	f=f*i;
	return (f);
}
