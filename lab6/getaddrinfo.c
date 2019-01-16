#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s hostname\n",argv[1]); 
    }

    struct addrinfo *answer, hint, *curr;
    char ipstr[16];    
    bzero(&hint, sizeof(hint));
    hint.ai_family = AF_INET;
    hint.ai_socktype = SOCK_STREAM;

    int ret = getaddrinfo(argv[1], NULL, &hint, &answer);
    if (ret != 0) {
        fprintf(stderr,"getaddrinfo: &s\n",gai_strerror(ret));
    }

    for (curr = answer; curr != NULL; curr = curr->ai_next) {
        inet_ntop(AF_INET, &(((struct sockaddr_in *)(curr->ai_addr))->sin_addr), ipstr, 16);
        printf("%s\n", ipstr);
    }

    freeaddrinfo(answer);
}
