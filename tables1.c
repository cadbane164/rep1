#include<stdio.h>

int main()
{
	int i ,j;
	printf("Enter the number\n");
	scanf("%d",&i);
	for(j=0;j<=10;j++)
	{
		printf("%dx%d=%d\n",i,j,i*j);
	}
return 0;
}

