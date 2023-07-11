#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char a[30];
	fptr = fopen("welcome.txt","r");
	if(fptr=NULL){
		printf("404 error");
		exit (0);
	}
    fgets(a,30,fptr);
    printf("%s",a);
	fclose(fptr);
	return 0;
}
