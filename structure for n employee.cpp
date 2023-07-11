#include<stdio.h>
struct employee{
	int id;
	char name[20];
	float salary;
};
int main(){
	int n,i;
	struct employee e[n];
	printf("Enter total number of employee:\n");
	scanf("%d",&n);
	printf("Enter the details:\n");
	for(i=0;i<n;i++){
		printf("\nID:\n");
		scanf("%d",&e[i].id);
		printf("Name:\n");
		scanf("%s",e[i].name);
		printf("salary:\n");
		scanf("%f",&e[i].salary);
		printf("******************************\n");
	}
	
	printf("You entered:\n");
	for(i=0;i<n;i++){
		printf("\nID:%d\n",e[i].id);
		printf("Name:%s\n",e[i].name);
		printf("salary:%f\n",e[i].salary);
		printf("******************************\n");
	}
	return 0;
}
