#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

#define  BUFF_SIZE   1024

int   main( int argc, char **argv)
{
   int   sock;
   int   server_addr_size;

   struct sockaddr_in   server_addr;

   char   buff_rcv[BUFF_SIZE+5];


   sock  = socket( PF_INET, SOCK_DGRAM, 0);
   
   if( -1 == sock)
   {
      printf( "socket create fail\n");
      exit( 1);
   }

   memset( &server_addr, 0, sizeof( server_addr));
   server_addr.sin_family     = AF_INET;
   server_addr.sin_port       = htons( 4000);
   server_addr.sin_addr.s_addr= inet_addr( argv[1]);

	while(1){
		printf("[input msg] :");
		fgets(buff_rcv,BUFF_SIZE,stdin);
		sendto( sock, buff_rcv, strlen( buff_rcv), 0,    // +1: send include NULL
        	( struct sockaddr*)&server_addr, sizeof( server_addr));          
	}  
	close( sock);
	return 0;
}
