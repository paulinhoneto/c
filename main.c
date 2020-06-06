/*
file:
main.c
description:
operações com arquivos.
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(int argc, char* argv[]){

  int fd;
  char buffer[80];
  char msg[50] = "Hello Ifocus Institute";
  fd = open("check.txt", O_RDWR);

  printf("\nfd = %d\n", fd);

  if (fd != -1) {
    printf("\ncheck.txt opened with read write access\n");
    write(fd, msg, sizeof(msg));
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, sizeof(msg));
    printf("\n%s was written to my file\n\n", buffer);
    close(fd);
  }
}


