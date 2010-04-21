#include<stdio.h>

void fun(int,int,int);

void fun(int a,int b,int c){
char buff1[5];
char buff2[10];
int *ret;
ret=(int *) buff1 + 12;
(*ret) +=8;
}

int main(int argc,char **argv){
	int x;
	x=0;
	fun(1,2,3);
	x=1;
	printf("%d\n",x);
	return 0;
}
