//Develop a program to concartenate two strings using strcat.
#include<stdio.h>
#include<string.h>
void main()
{
	char S1[55],S2[50];
	printf("Enter string1:");
	gets(S1);
	printf("Enter string2:");
	gets(S2);
	strcat(S1,S2);
	printf("%s",S1);
}
