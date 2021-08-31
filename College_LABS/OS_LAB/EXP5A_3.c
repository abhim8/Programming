/* Client */
/* Compile 1st, 2nd prgrms and run them. Next, open new terminal and create server.c  The code of server.c is given below */
#include<stdio.h> 
#include<fcntl.h>
#include<stdlib.h>
main() {
    FILE *file1;
    int fifo_server,fifo_client;
    char str[256];
    char *buf;
    int choice=1;
    printf("Choose the request to be sent to server from options below");
    printf("\n\t\t Enter 1 for College Name \n \\ Enter 2 for Location \n \\ Enter 3 for Course \n");
    scanf("%d",&choice);
    fifo_server=open("fifo_server",O_RDWR);
    if(fifo_server < 0) {
        printf("Error in opening file");
        exit(-1);
    }
    write(fifo_server,&choice,sizeof(int));
    fifo_client=open("fifo_client",O_RDWR);
    if(fifo_client < 0) {
        printf("Error in opening file");
        exit(-1);
    }
    buf=malloc(10*sizeof(char));
    read (fifo_client,buf,10*sizeof(char));
    printf("\n ***Reply from server is %s***\n",buf);
    close(fifo_server);
    close(fifo_client);
    
}

/* 
    Now compile it and run it.
    
    Input in Terminal of client:
        Choose the request to be sent to server from options below
   	    Enter 1 for College Name 
                Enter 2 for Location 
                Enter 3 for Course
                             1
    Output in Server Terminal:
        Data sent to client
    
    Output in client’s Terminal:
    CMRTC



 */