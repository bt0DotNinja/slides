#include<string.h>

void fun(char *);

void fun(char *s){
	char buff[10];
	strcpy(buff,s);
}

int main(int argc,char **argv){
	char otherbuff[64];
	int i;
	for(i=0;i<32;i++)
		otherbuff[i]='A';
	fun(otherbuff);
	return 0;
}
