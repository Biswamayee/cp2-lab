#include<stdio.h>
void main()
{
	#ifndef MAX
	#pragma message("MAX is not defined.")
	#endif
	printf("MAX is defined!\n");
}
