#include<stdio.h>
int main()
{
	int x[20];
	int i;
	for(i=0;i<20;++i){
		x[i]=i;
	}
	for(i=0;i<20;++i){
	printf("%d\n",x[i]);
	}
	return 0;
}
