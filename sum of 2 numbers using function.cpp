#include<stdio.h>
void sum(int x, int y){
	int s;
	s=x+y;
	printf("%d",s);
}
int main(){
	int a,b;
	printf("enter the numbers:\n");
	scanf("%d %d",&a,&b);
	printf("the sum is:\n");
	sum(a,b);
	return 0;
}
