//How can you define a structure to store a data and display it in the format DD/MM/YYYY ?
#include<stdio.h>
struct Day
{
	int DD, MM, YYYY;
}
Date;
void main()
{
	struct Date d1={11,11,2006};
	struct Date d1;
	printf("Enter the date:");
	scanf("%d %d %d", d1.DD, d1.MM, d1.YYYY);
	printf("%d %d %d", d2.DD, d2.MM, d2.YYYY);
}
