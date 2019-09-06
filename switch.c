#include<stdio.h>
int main()
{
	char x;
	printf("Who is the Captain Indian Cricket team?\n");
	printf("a.Vijay Shankar\t\t\tb.Virat\t\t\tc.Ashok Dinda\t\t\td.Vinay Kumar\n");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':{ 
		printf("\nWrong Answer!!\n you even serious?");
		break;}
		case 'b':{
			printf("Congratulations!!!!\n such knowledge,much wow");
		break;}
		case 'c':{
			printf("Wrong Answer!!\n you gotta see a doctor, there is bad news for you");
		break;}
		case 'd':{
			printf("Wrong Answer!!\n ffs!!");
		break;}
		default:{
		printf("Invalid option!");
		}
	}
return 0;
}
