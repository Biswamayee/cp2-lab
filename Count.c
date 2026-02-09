// Develop a program to count occurence of a specific character in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char S[50];
	int i,count=0,ch;
	printf("Enter a string:");
	gets(S);
	printf("Enter the ch:");
	scanf("%c",ch);
	for(i=0;S[i]!=0;i++)
	{
		if (S[i]==ch)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
	
}
