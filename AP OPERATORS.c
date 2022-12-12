#include<stdio.h>
#include<conio.h>
void main()
{   
    int a,b,c;
    float div;
    printf("\nEnter the First Number=");
    scanf("%d" ,&a);
    printf("\nEnter the Second Number=");
    scanf("%d" ,&b);
    c=a+b;
    printf("\nAddition of Two numbers=%d",c);
    c=a-b;
    printf("\nSubstraction of Two Numbers=%d",c);
    c=a*b;
    printf("\nMultiplication of Two Numbers%d",c);
    div=a/b;
    printf("nDivision =%f",div);
    c=a%b; printf("\nRemainder=%d",c);
    getch();
}
    
