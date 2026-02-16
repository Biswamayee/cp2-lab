//WAP to define a structure for complex number
#include<stdio.h>
struct complex
{
	int i,r;
}complex;
main()
{
	struct complex C1,C2,C3;
	printf("Enter 1st complex num: ");
	scanf("%d %d",&C1.r, &C1.i);
	printf("Enter 2nd complex num: ");
	scanf("%d %d",&C2.r, &C2.i);
	C3.r= C1.r+C2.r;
	C3.i= C1.i+C2.i;
	printf("%d %d",C3.r, C3.i);
}
