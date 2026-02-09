//WAP to compare two strings using strcmp
#include<stdio.h>
#include<string.h>
void main()
{
	char S1[55],S2[50];
	printf("Enter string1:");
	gets(S1);
	printf("Enter string2:");
	gets(S2);
	if (strcmp(S2,S1))
	{
		printf("Not Same");
	}
	else
	{
		printf("Same");
	}
}
