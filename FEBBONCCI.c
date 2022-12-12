#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,first=0,second=1,next=0;
	printf("\n Enter the number for fibonnacci series:=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {
	 	printf("\t %d",first);
	 	next=first+second;
	 	first=second;
	 	second=next;
	 }
   getch();
}
