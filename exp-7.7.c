// Implement a function to count the no. of words in a string using pointer.
#include<stdio.h>
int ev_od(int *c)
{
	int count=0,i,conut=0;
	int no=0;
	for(i=0;*(c+i)!=0; i++)
	if(*(c+i)==0)
	{
		count++;
		return count++;
	}
	else
	{
		conut++;
	}
}
int main()
{
	printf("enter an elemnet: ");
	scanf("%d",&no);
	printf("No. of even is: %d",ev_od(no));
}
