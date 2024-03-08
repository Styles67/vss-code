#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    char course[20];
};
 int main()
{
    struct student s1,s2,s3;
    printf("Enter the name of the student\n");
    scanf("%s", s1.name);
    printf("Enter the roll no of the student\n");
    scanf("%d", &s1.rollno);
    printf("Enter the course of the student\n");
    scanf("%s", s1.course);
    printf("Detail of first student is:\n");
    printf("%s\n%d\n%s\n", s1.name, s1.rollno, s1.course);
    printf("\n");
    printf("Enter the name of the student\n");
    scanf("%s", s2.name);
    printf("Enter the roll no of the student\n");
    scanf("%d", &s2.rollno);
    printf("Enter the course of the student\n");
    scanf("%s", s2.course);
    printf("Detail of Second student is:\n");
    printf("%s\n%d\n%s\n", s2.name, s2.rollno, s2.course);
    printf("\n");
    printf("Enter the name of the student\n");
    scanf("%s", s3.name);
    printf("Enter the roll no of the student\n");
    scanf("%d", &s3.rollno);
    printf("Enter the course of the student\n");
    scanf("%s", s3.course);
    printf("Detail of hird student is:\n");
    printf("%s\n%d\n%s\n", s3.name, s3.rollno, s3.course);
    return 0;
}