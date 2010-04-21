#include<stdio.h>

int main(int argc, char **argv){
	int i=1; //0x00000001
	char *a=(char *) &i;
	if(a[0]==1)
		printf("Little-Endian\n");
	else
		printf("Big-Endian\n");
	printf("%X%X%X%X\n",a[0],a[1],a[2],a[2]);
return 0;
}
