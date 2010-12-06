#include<stdio.h>

char * pinta(char *);

int main(){
	char hola[]="HOLA";
	char *hola2=pinta(hola);
	printf("%s\n",hola2);
}

char * pinta(char *cadena){
	printf("%s",cadena);
	return cadena;
	}
