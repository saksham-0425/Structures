#include<stdio.h>
#include<string.h>
struct student
{
	char name[20000];
	char dept[10000];
	int id;
	char des;
	int age;
	char gender;
	float salary;
}s1;
	void main(){
	int i;
	char x;
	printf("Enter the Details \n");
	printf("Enter name of the employee: ");
	scanf("%s",s1.name);
	printf("Enter the department : ");
	scanf("%s",s1.dept);
	printf("Enter the id : ");
	scanf("%d",&s1.id);
	scanf("%c",&x);
	printf("Enter the designation : ");
	scanf("%c",&s1.des);
	printf("Enter the age : ");
	scanf("%d",&s1.age);
	scanf("%c",&x);
	printf("Enter the gender : ");
	scanf("%c",&s1.gender);
	scanf("%c",&x);
	printf("Enter salary : ");
	scanf("%f",&s1.salary);
	scanf("%c",&x);
	printf("DETAILS ARE AS FOLLOWS : ");
	printf("Name of first student is %s\n",s1.name);
	printf("Dept. of first student is %s\n",s1.dept);
	printf("id no of first student is %d\n",s1.id);
	printf("designation of first student is %c\n",s1.des);
	printf("Age of first student is %d\n",s1.age);
	printf("Gender of first student is %c\n",s1.gender);
	printf("salary of first student is %f\n",s1.salary);
}
	
	
	
	
	
	
	
	
	
	
	
