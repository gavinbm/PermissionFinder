#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char **argv) {
    struct stat fileStat;

    if(stat(argv[1], &fileStat) < 0) {
        printf("invalid file argument\n");
        return 2;
    }

    if(S_ISREG(fileStat.st_mode))
        printf("Regular file\n");
    else
        printf("Not a regular file\n");

    printf("Owner:  ");
    if(fileStat.st_mode & S_IRUSR)
        printf("read ");
    if(fileStat.st_mode & S_IWUSR)
        printf("write ");
    if(fileStat.st_mode & S_IXUSR)
        printf("execute");
    printf("\n");

    printf("Group:  ");
    if(fileStat.st_mode & S_IRGRP)
        printf("read ");
    if(fileStat.st_mode & S_IWGRP)
        printf("write ");
    if(fileStat.st_mode & S_IXGRP)
        printf("execute");
    printf("\n");

    printf("Other:  ");
    if(fileStat.st_mode & S_IROTH)
        printf("read ");
    if(fileStat.st_mode & S_IWOTH)
        printf("write ");
    if(fileStat.st_mode & S_IXOTH)
        printf("execute");
    printf("\n");

    return 0;

}
