//Implement a function to find the largest element in an array using pointers.
#include<stdio.h>
int main()
{
	int a[5],*p,max;
	printf("Enter 5 elements:\n");
	for(p=a;p<a+5;p++)
	scanf("%d",p);
	max=*a;
	for(p=a;p<a+5;p++){
	if(*p>max)
	max=*p;
	}
	printf("Largest element=%d",max);
}
