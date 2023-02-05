#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    c= a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("\nAddition of %d and %d is %d",a,b,c);
    printf("\nSubtraction of %d and %d is %d",a,b,d);
    printf("\nMultiplication of %d and %d is %d",a,b,e);
    printf("\nDivision of %d and %d is %d",a,b,f);
    printf("\nModulous of %d and %d is %d",a,b,g);
    getch();
}