#include<stdio.h>
int add(int a,int b)
{
if (!a)
return b;
else 
return add((a&b)<<1,(a^b));
}
int main()
{int x;
x=add(5,6);
return 0;
printf("%d",x);
}


