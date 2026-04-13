// WAP to input an array of integers & print them using pointers.
#include<stdio.h>
int main()
{
	int a[5],*p;
	printf("Enter 5 elements:\n");
	for(p=a;p<a+5;p++)
	scanf("%d",p);
	printf("Array elements:\n");
	for(p=a;p<a+5;p++)
	printf("%d",*p);
	return 0;
}
