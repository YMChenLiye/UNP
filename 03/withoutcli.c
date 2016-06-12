#include "unp.h"

int main(int argc,char** argv)
{
	if(argc != 3){
		printf("usage: %s ipaddress port",argv[0]);
		return 1;
	}
	struct sockaddr_in servaddr;
	bzero(&servaddr,sizeof(servaddr));

	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(atoi(argv[2]));
	inet_pton(AF_INET,argv[1],&servaddr.sin_addr);

	int connfd = socket(AF_INET,SOCK_STREAM,0);

	connect(connfd,(SA*)&servaddr,sizeof(servaddr));
	for(;;){
	}
	close(connfd);
}

	
