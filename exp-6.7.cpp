// Create a program where a pointer to pointer is used to access & modify a variable of type integer.
#include<stdio.h>
int main ()
{
int var= 50;
int *p= &var;
int **pp= &p;
printf("initial value of var:%d\n",var);
printf("Value in single pointer (*p):%d\n",p);
printf("Value at (**pp):%d\n",**pp);
**pp= 150;
printf("\nValue of after modification:%d\n",var);
printf("Value at after modification(*p):%d\n",*p );
printf("Value at after modification(**pp):%d\n", **pp);
return 0;
}
