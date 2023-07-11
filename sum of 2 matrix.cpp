#include<stdio.h>
#define row 10
#define col 10
int main(){
	int a[row][col],b[row][col],s[row][col],i,j,r,c;
	printf("Enter the row and the column of the matrix:\n");
	scanf("%d %d",&r,&c);
	//1st matrix
	printf("Enter the 1st matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//2nd matrix
	printf("Enter the 2nd matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	//sum
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	//display	
	printf("The sum is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
