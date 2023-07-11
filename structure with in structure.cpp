#include<stdio.h>
struct dob{
	int year;
	int day;
	int month;
};
struct student{
	int id;
	char name[20];
	float mark;
	struct dob bd;
};

int main()
{
	struct student a[2];
	int i;
	printf("Enter the details about student like id, name, mark and dob in yyyy/mm/dd form:\n");
	for(i=0;i<2;i++){
		scanf("%d",&a[i].id);
		scanf("%s",&a[i].name);
		scanf("%f",&a[i].mark);
		scanf("%d",&a[i].bd.year);
		scanf("%d",&a[i].bd.month);
		scanf("%d",&a[i].bd.day);
	}
	
	printf("you entered:\n");
	for(i=0;i<2;i++){
		printf("id:%d\nname:%s\nmark:%f\ndob:%d/%d/%d\n",a[i].id,a[i].name,a[i].mark,a[i].bd.year,a[i].bd.month,a[i].bd.day);
	}
    return 0;
}
