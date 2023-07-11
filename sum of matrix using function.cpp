#include<stdio.h>
//sum
void sum(int a[][10],int b[][10],int s[][10], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			s[i][j]=a[i][j]+b[i][j];
		}
	}
}
//output
void display(int s[][10],int r, int c)
{
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
//main function
int main(){ 
	int a[10][10],b[10][10],s[10][10];
	int i,j,r,c;
	printf("enter the size of the matrix:\n");
	scanf("%d %d",&r,&c);
	//read 1st matrix
	printf("enter the element of the first matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//read 2nd matrix
	printf("enter the element of the second matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	sum(a,b,s,r,c);
	printf("the sum of the matrix is:\n");
	display(s,r,c);
}
