#include<stdio.h>

void fun(int,int,int);

void fun(int a,int b,int c){
char buff1[5];
char buff2[10];
int i;
for(i=0;i<5;i++) buff1[i]='A';
for(i=0;i<10;i++) buff2[i]='B';
for(i=0;i<32;i++)
	printf("%X->%X [%d] ",buff1+i,*(buff1+i),i);
printf("\n\n");
int *ret;
ret=(int *) buff1 + 12;
(*ret) +=8;
for(i=0;i<32;i++)
	printf("%X->%X [%d] ",buff1+i,*(buff1+i),i);
printf("\n");
printf("%s\n",buff1);
}

int main(int argc,char **argv){
	int x;
	x=0;
	fun(1,2,3);
	x=1;
	printf("%d\n",x);
	return 0;
}
