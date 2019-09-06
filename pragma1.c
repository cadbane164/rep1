#include<stdio.h>
void A() __attribute__((constructor(110)));
void B() __attribute__((constructor));
void A() __attribute__((destructor));
void B() __attribute__((destructor(110)));

int main()
{
printf("\nIn main");
return 0;
}

void A()
{
printf("\nIn A");
}

void B()
{
printf("\nIn B");
}
