// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct employee{
    int age;
    char name[20];
};

int main() {
    FILE *ptr;
    struct employee e;
    int i;
   
    ptr=fopen("D:\\employee.txt","wb");
    if(ptr==NULL){
        printf("Error");
        exit (0);
    }
 
    printf("Enter the age and name of the employee");
    scanf("%d",&e.age);
    scanf("%s",e.name);
    
    fwrite(&e,sizeof(e),1,ptr);
    
    fclose(ptr);
    
   
    return 0;
}
