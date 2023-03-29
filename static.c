#include<stdio.h>
void increment();
int main()
{
	
	increment();
	increment();
	increment();
	increment();
	return 0;
	
}
void increment()
{
	static int i=1;
	printf("%d",i);
	i=i+1;

}
