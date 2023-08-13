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
}s1,s2;
	void main(){
	int i;
	char x;
	printf("Enter the Details \n");
	printf("Enter name of first student : ");
	scanf("%s",s1.name);
	printf("Enter name of second student : ");
	scanf("%s",s2.name);
	printf("Enter the department : ");
	scanf("%s",s1.dept);
	printf("Enter the department : ");
	scanf("%s",s2.dept);
	printf("Enter the Roll no : ");
	scanf("%d",&s1.roll);
	printf("Enter the Roll no : ");
	scanf("%d",&s2.roll);
	printf("Enter the semester : ");
	scanf("%d",&s1.sem);
	printf("Enter the semester : ");
	scanf("%d",&s2.sem);
	printf("Enter the age : ");
	scanf("%d",&s1.age);
	printf("Enter the age : ");
	scanf("%d",&s2.age);
	scanf("%c",&x);
	
	printf("Enter the gender : ");
	scanf("%c",&s1.gender);
	printf("Enter the gender : ");
	scanf("%c",&s2.gender);
	scanf("%c",&x);
	printf("Enter the marks : ");
	for(i=0;i<3;i++)
	scanf("%d",&s1.marks1[i]);
	printf("Enter the marks : ");
	for(i=0;i<3;i++)
	scanf("%d",&s2.marks2[i]);
	
	printf("Enter CGPA : ");
	scanf("%f",&s1.cgpa);
	printf("Enter CGPA : ");
	scanf("%f",&s2.cgpa);
	scanf("%c",&x);
	
	printf("Name of first student is %s\n",s1.name);
	printf("Name of second student is %s\n",s2.name);
	printf("Dept. of first student is %s\n",s1.dept);
	printf("Dept. of second student is %s\n",s2.dept);
	printf("Roll no of first student is %d\n",s1.roll);
	printf("Roll no of second student is %d\n",s2.roll);
	printf("Sem of first student is %d\n",s1.sem);
	printf("Sem of second student is %d\n",s2.sem);
	printf("Age of first student is %d\n",s1.age);
	printf("Age of second student is %d\n",s2.age);
	printf("Gender of first student is %c\n",s1.gender);
	printf("Gender of second student is %c\n",s2.gender);
	printf("Marks of first student is ");
	for(i=0;i<3;i++)
	printf("%d\t",s1.marks1[i]);
	printf("Marks of second student is ");
	for(i=0;i<3;i++)
	printf("%d\t",s2.marks2[i]);
	printf("CGPA of first student is %f\n",s1.cgpa);
	printf("CGPA of second student is %f\n",s2.cgpa);
}
	
	
	
	
	
	
	
	
	
	
	
