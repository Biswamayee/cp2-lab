// WAP to copy one string to another using strcpy.
#include<stdio.h>
#include<string.h>
main()
{
	char S1[100],S2[100];
	printf("Enter string1:");
	gets(S1);
	printf("Enter string2:");
	gets(S2);
	strcpy(S1,S2);
	printf("%s",S1);
}

