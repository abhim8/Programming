/* I/O system calls of UNIX/LINUX OS  */
#include <syscall.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char *argv[]){
     int fd;
     fd = open(argv[1], O_CREAT | O_RDONLY);
     if (fd == -1){
          printf("error opening the file");
     }
     void *buf = (char *)malloc(120);
     int count = read(fd, buf, 120);
     printf("count : %d", count);
     printf("%s", buf);
     close(fd);
     int f1;
     f1 = open(argv[2], O_CREAT | O_WRONLY);
     if (f1 == -1){
          printf("error opening the file");
     }
     int c;
     while (count = read(fd, buf, 120) > 0){
          c = write(f1, buf, 120);
     }
     if (c == -1){
          printf("error writing to the file");
     }
     printf("\n Successfully copied the content from one file to other");
     close(f1);
}
