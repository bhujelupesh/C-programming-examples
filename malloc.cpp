#include<stdio.h>
#include<stdlib.h>
int sum(int *ptr, int n)
{
	int i,add=0;
	for(i=0;i<n;i++){
		add+=*(ptr+i);
	}	
	return add;
}
int main()
{
	int n,i,s,*p;
	printf("Enter the number of numbers you want to find sum of:\n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	s=sum(p,n);
	printf("The sum is:\n%d",s);
	free(p);
	return 0;
}
