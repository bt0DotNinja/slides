//http://github.com/Vendaval/slides
//<getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>

int main(int argc, char *argv[]){

    int ds, nds,len;
    char buf[BUFSIZ];
    struct sockaddr_in servidor, cliente;

    if ((ds = socket (AF_INET, SOCK_STREAM, 0)) < 0) {
        perror ("socket");
        exit (-1);
    } 

    servidor.sin_family = AF_INET;
    servidor.sin_addr.s_addr=inet_addr(argv[1]);
    servidor.sin_port = htons(54321);
    if ((bind (ds,(struct sockaddr *)&servidor,sizeof(servidor))) < 0){
        perror ("bind");
        exit(-1);
    }
    
    listen (ds,SOMAXCONN);
    printf ("\nEsperando por clientes ...\n");
    len = sizeof(cliente);
    for (;;) { 
        
    if ((nds = accept (ds,(struct sockaddr *) &cliente, &len)) <0) {
        perror ("accept");
        exit (-1);
    } 
       
    printf ("\nCliente conectado\n");
    write ( nds, "hola\n",6);
    read( nds, buf, sizeof(buf));
	printf("%s\n");
    close (nds);
	}
exit(0);
}
