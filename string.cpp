#include<stdio.h>
int main()
{
 char a[20];
 printf("enter your name:\n");
 fgets(a, sizeof(a), stdin);
 printf("Your name is:\n%s",a);
 return 0;	
}
