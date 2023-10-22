#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    int n,fd;
    char buff[50]; //declaring buffer

    //message to be printed on the display 
    printf("Enter text to write in the file : \n");

    //here n stores the number of characters
    n= read(0,buff,50);

    fd = open("file",O_CREAT | O_RDWR,0777);

    write(fd,buff,n);

    write (1,buff,n);

    int close(int fd);

    return 0;
}


