#include<stdio.h>
#include<stdlib.h>

struct booklist {
	char member_name[20];
	char author[20];
	float price;
};


void total_cost(struct booklist x[]){
	int i;
	float t=0;
	for (i=0;i<4;i++){
		t=t+x[i].price;
	}
	printf("Total cost\n%f",t);
}


int main(){
	struct booklist b[4];
	int i;
	
	printf("Enter the details of 4 books:\n");
	for(i=0;i<4;i++){
		printf("Member name:\n");
		scanf("%s",&b[i].member_name);
		printf("Auther name:\n");
		scanf("%s",&b[i].author);
		printf("Enter the price:\n");
		scanf("%f",&b[i].price);
		printf("**************************************\n");
	}
	
	total_cost(b);
}
