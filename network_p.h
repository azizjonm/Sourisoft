#ifndef NETWORK_P_H
#define NETWORK_P_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "network.h"

#define SEND 0
#define RECV 1

#define PORT 15246

void shell_from_client( int );
void sendCommand(int sock,char* ip);



void recv_from_server( int );

int receipt_confirmation( int, int );

#endif
