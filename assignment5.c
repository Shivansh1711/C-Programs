#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,e;
    float d;
    printf("Enter three numbers to get an average : ");
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b+c)/(float)3;
    printf("Average : %f\n",d);
    return 0;
    getch();
}