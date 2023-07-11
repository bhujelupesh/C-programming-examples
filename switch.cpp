#include<stdio.h>
int main()
{
	float a,b;
	float s,sub,p,q;
	char ch;
	printf("enter the 2 numbers:\n");
	scanf("%f %f", &a, &b);
	printf("Enter your choice:\n");
	printf("+ to add\n-to subtract\n* to multiply\n/ to divide\n");
	scanf(" %c", &ch);
	
	switch(ch){
		case '+':
			s=a+b;
			printf("sum=%f",s);
			break;
			
		case '-':
			sub=a-b;
			printf("sub=%f",sub);
			break;
			
		case '*':
			p=a*b;			
			printf("product=%f",p);
			break;
			
		case '/':
			q=a/b;			
			printf("quotient=%f",q);
			break;
			
		default:
			printf("Invalid choice");
	}
	return 0;
	
}
