#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    long n = 100000000000;
    char *buffer = "\0";
    int fd = open("hole", O_RDWR | O_CREAT | O_TRUNC, 0664);

    write(fd, buffer, 1);
    lseek(fd, 10, SEEK_CUR);
    write(fd, "\0", 1);
    
    return 0;
}
