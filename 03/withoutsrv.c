#include "unp.h"

int main()
{
	int sockfd = socket(AF_INET,SOCK_STREAM,0);

	struct sockaddr_in sockaddr;
	bzero(&sockaddr,sizeof(sockaddr));

	sockaddr.sin_family = AF_INET;
	sockaddr.sin_family = htons(8888);
	sockaddr.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(sockfd,(SA*)&sockaddr,sizeof(sockaddr));

	listen(sockfd,5);

	for(;;){

	}

	exit(0);
}
