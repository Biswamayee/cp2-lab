// WAP to copy one string to another using pointer.
#include<stdio.h>
char src[100],dest[100];
char *s=src, *d=dest;
void main()
{
	printf("Enter a string:");
	gets(src);
	while (*d++= *s++)
	printf("Another string is: %s",dest);
}
