#include<stdio.h>

int main()
{
	int cool;
	char name[10];
	printf("enter your name\n");
	scanf("%s",name);
	printf("how cool do you think you are\n");
	scanf("%d",&cool);
	if (cool>7)
	{
		printf("hey %s, you are cool\n",name);
	}
	else
		printf("better luck next time");
return 0;
}
