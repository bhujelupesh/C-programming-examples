#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	char str[20];
	fptr=fopen("D:/test.txt","w");
	if(fptr==NULL){
		printf("File cannot be created");
		exit (0);
	}
	fputs("welcome here",fptr);
	fclose(fptr);
	return 0;
}
