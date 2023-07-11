#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	fptr = fopen("welcome.txt","w");
	if(fptr=NULL){
		printf("404 error");
		exit (0);
	}
	fputs("shut the fuck off",fptr);
	fclose(fptr);
	return 0;
}
