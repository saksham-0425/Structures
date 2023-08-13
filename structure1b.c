#include<stdio.h>
#include<string.h>
struct student
{
	char name[20000];
	char dept[10000];
	int roll;
	int sem;
	int age;
	char gender;
	int marks1[3],marks2[3];
	float cgpa;
}s[10];
	void main(){
	int i;
	char x;
	printf("Enter info of students : ");
	for(i=0;i<10;i++)
	printf("Enter name :");
	scanf("%s",s[i]);
	printf("Enter the department : ");
	scanf("%s",s[i]);
	printf("Enter the Roll no : ");
	scanf("%d",&s[i]);
	printf("Enter the semester : ");
	scanf("%d",&s[i]);
	printf("Enter the age : ");
	scanf("%d",&s[i]);
	
	scanf("%c",&x);
	
	printf("Enter the gender : ");
	scanf("%c",&s[i]);
	
	scanf("%c",&x);
	printf("Enter the marks : ");
	for(i=0;i<3;i++)
	scanf("%d",&s[i].marks1[i]);
	printf("Enter the marks : ");
	for(i=0;i<3;i++)
	scanf("%d",&s[i].marks2[i]);
	
	printf("Enter CGPA : ");
	scanf("%f",&s[i]);
	
	scanf("%c",&x);
	printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 10; ++i) {
        
        printf(" NAME : ");
        printf("DEPT: ");
        printf("ROLL no ");
        printf("SEM");
        printf("AGE");
        printf("GENDER");
        printf("MARKS ");
        printf("CGPA");
        
        
        
        printf("\n");}}
	
