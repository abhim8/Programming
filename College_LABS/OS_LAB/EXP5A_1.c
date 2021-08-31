/* IPC using pipes */
#include<stdio.h> 
#include<fcntl.h>
#include<stdlib.h>
main() {
    int file1,file2;
    int fd;
    char str[256];
    char temp[4]="how";
    char temp1[4];
    
    file1 = mkfifo("fifo_server",0666); 
    if(file1<0){
        printf("Unable to create a fifo");
        exit(-1);
    }
    file2 = mkfifo("fifo_client",0666);
    if(file2<0) {
        printf("Unable to create a fifo");
        exit(-1);
    }
    printf("fifos server and child created successfuly");
}
