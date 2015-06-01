#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>

struct sendData {
	char addr[20];
	char port[10];
	char msg[50];
};

int main (int argc, char *argv[])
{
	int fd;
	char Rtemp[20], Mtemp[20];
	struct sendData sendData;
	//struct sockaddr_in udpServ;
	while ( (fd = getopt(argc, argv, "r:m:n:t:h")) != -1)
	{
		switch (fd)
		{
			case 'r':
				sprintf(Rtemp, "%s", optarg);
				printf("Remote udp address=%s\n", Rtemp);
				break;
			case 'm':
				sprintf(Mtemp, "%s", optarg);
				printf("Udp Message=%s\n", Mtemp);
				break;
			case 'h':
			default:
				printf("Use: tudpc -r xxx -m xxx\n-r:udp address:port\n-m:Message\n");
		}
	}

	/* get data
	 */
	
	
#if 0
	/*  Create Udp socker
	 */
	fd = socket(AF_INET, SOCK_DGRAM, 0);
	
        /* AF_INET Ipv4 */
        udpServ.sin_family           	      = AF_INET;
        udpServ.sin_port                      = htons (); /* host to net, short */
	.sin_addr	
	
#endif
	return 0;	
}
