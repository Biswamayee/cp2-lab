//WAP to input a string and display each character on a new line.
#include<stdio.h>
main()
{
	char S[25];
	int i;
	printf("Enter a sring:");
	gets(S);
	for(i=0;S[i]!=0;i++)
	printf("%c\n", S[i]);
}
