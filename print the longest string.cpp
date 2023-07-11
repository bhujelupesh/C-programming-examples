#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	
	printf("Enter the first string:\n");
	fgets(a, sizeof(a), stdin);
	
	printf("Enter the second string:\n");
	fgets(b, sizeof(b), stdin);
	
	if (strlen(a)>strlen(b))
	{
		printf("\n%sIs the largest",a);
	}
	else if(strlen(b)>strlen(a))
	{
		printf("\n%sIs the largest",b);
	}
	else
	{
		printf("\nBoth are equal in length");
	}
	return 0;
}
