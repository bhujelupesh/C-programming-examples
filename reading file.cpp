#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	char str[20];
	fptr=fopen("D:/test.txt","r");
	if(fptr==NULL){
		printf("File cannot be accessed");
		exit (0);
	}
	fgets(str,10,fptr);
	printf("data inside the file is:\n%s",str);
	fclose(fptr);
	return 0;
}
