#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/utsname.h>
#include <sys/un.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <netdb.h>

int main (int argc, char *argv[]){
    int ds, nbytes;
	char buffer [BUFSIZ];
    struct sockaddr_in servidor;
	struct protoent *pp=getprotobyname("tcp");

    if ((ds = socket (AF_INET, SOCK_STREAM, pp->p_proto)) < 0) {
		perror ("socket");
		exit(-1);
    }

    servidor.sin_family = AF_INET;
    servidor.sin_addr.s_addr = inet_addr(argv[1]);
    servidor.sin_port = htons(54321);
    if (connect(ds,(struct sockaddr *)&servidor,sizeof(servidor)) < 0) {
		perror ("connect");
		exit(-1);
    }
      
	nbytes = read (ds,buffer,sizeof(buffer));
  	printf ("\n El servidor dice: ");
	printf("%s\n",buffer);
    write (ds, "Hola del cliente =)\n", 21);
	close (ds);
	exit (0);
}
