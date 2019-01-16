/* for inet_ntoa() */
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <netdb.h>

#include <stdlib.h>
#include <stdio.h>

int main() {

 struct hostent *hp = gethostbyname("github.com");

 if (hp == NULL) {
   fprintf(stderr,"gethostbyname() failed\n");
 } else {
   printf("%s = ", hp->h_name);
   unsigned int i=0;
   while ( hp -> h_addr_list[i] != NULL) {
     printf( "%s ", inet_ntoa( *( struct in_addr*)( hp -> h_addr_list[i])));
     i++;
   }
   printf("\n");
 }
}
