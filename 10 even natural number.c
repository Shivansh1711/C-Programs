#include <stdio.h>
int main()
{
	int x=2,y=1;
	while (x<=20)
	{
		if (x%2==0)
		printf("%d : count:%d\n",x,y);
		x+=2;
		y+=1;
	}
}
