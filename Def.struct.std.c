//WAP to define a structure for a student containing fields for name,roll_no and marks. Input and display the details.
#include<stdio.h>
struct student
{
	char Name[25];
	int Roll_No;
	float Marks;
}student;
main()
{
	struct student S1;
	printf("Enter a student details: ");
    gets(S1.Name);
	scanf("%d %f",&S1.Roll_No,&S1.Marks);
	printf("Name: %s, Roll_No: %d, Marks: %f", S1.Name, S1.Roll_No,S1.Marks);
}
