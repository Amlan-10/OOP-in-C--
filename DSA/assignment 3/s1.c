#include<stdio.h>

struct Student
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
struct Student s1,s2;
printf("Enter the details of s1:\n");
printf("Enter the roll number students of s1: ");
scanf("%d",&s1.roll_no);
printf("Enter the name of students s1: ");
scanf("%s",&s1.name);
printf("Enter the marks of students: ");
scanf("%f",&s1.marks);

printf("Enter the details of s2: ");
printf("Enter the roll number students of s2: ");
scanf("%d",&s2.roll_no);
printf("Enter the name of students s2: ");
scanf("%s",&s2.name);
printf("Enter the marks of student s2: ");
scanf("%f",&s2.marks);

printf("Entering student s1 details: \n");
printf("RollNo-> %d\tName-> %s\tMarks->%f",s1.roll_no,s1.name,s1.marks);
printf("Entering student s2 details: \n");
printf("RollNo-> %d\tName-> %s\tMarks->%f",s2.roll_no,s2.name,s2.marks);
}