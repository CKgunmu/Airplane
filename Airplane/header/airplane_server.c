#include <stdio.h>
#include <stdilb.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#define BUF_SIZE 1024

void error_heandling(char *message);

int main(int argc, char * argv[]) {
	int server_socket, client_socket;
	char message[BUF_SIZE];
	
	struct sockaddr_in, server_addr, client_addr;
	socklen_t client_addr_size;
	
	if(argc!=2) {
		printf("Usage : %s <port>\n", argv[0]);
		exit(1);
	}

	server_socket = socket(PF_INET, SOCK_STREAM,0);
	if (server_socket == -1) 
		error_handling("socket() error");
	
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(atoi(argv[1]));
	
	if(bind(server_sock, (struct sockaddr *)&server_addr, sizeof(serv_adr)) == -1)
		error_handling("bind() error");
	
	if(listen(server_sock, 5) == -1) 
		error_handling("listen() error");

	client_addr_size = sizeof(client_addr);
	
	for(i=0; i<5; i++) {
		client_socket = accept(server_sock, (strcut sockaddr*)&client_addr, &client_addr_size);
		if(client_socket == -1) 
			error_handling("accept() error");
		else 
			printf("Connected client %d \n", i+1);
		
		while((str_len = read(client_socket, message, BUF_SIZE))!=0)
			write(client_socket, message, str_len);

		close(clinet_socket);
	}
	close(socket);
	return 0;
}

void error_handling(char * message) {
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}
