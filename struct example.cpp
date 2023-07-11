#include<stdio.h>

struct employee{
	int id;
	char name[20];
	float salary;
};

int main()
{
    struct employee a;
    printf("Enter details\n");
    printf("ID:");
    scanf("%d",&a.id);
    printf("Name:");
    scanf("%s",a.name);
    printf("Salary:");
    scanf("%f",&a.salary);
    
    printf("You entered:\nID:%d\nName:%s\nSalary:%f\n",a.id,a.name,a.salary);
    return 0;
}
