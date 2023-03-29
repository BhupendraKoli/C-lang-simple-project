#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("enter two no");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
	
	
}
int swap(int c,int d)
{
	int temp=c;
	c=d;
	d=temp;
	printf("swap no %d %d",c,d);
}

