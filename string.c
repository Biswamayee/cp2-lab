// WAP to print your name and sic number.
#include<stdio.h>
void main()
{
	char name[25];
	char sic_no[10];
	printf("Enter your name:");
	gets (name);
	printf("Enter your sic_no:");
	scanf("%s",sic_no);
	printf("Name=%s in sic_no=%s",name,sic_no);
}
