#include<stdio.h>

int main()
{
	int a=2, b=3;
	a=a^b;
	b=b^a;
	a=a^b;
	printf("%d,%d",a,b);
return 0;
}
