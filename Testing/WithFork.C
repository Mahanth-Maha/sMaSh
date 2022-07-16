#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/unistd.h>
#define _XOPEN_SOURCE 600

int main(int argc,char ** argv){
    printf("START\n");
    char* margv[] = {"ping","www.youtube.com",NULL};
    pid_t childpid,p;
    printf("Before We have %d",p = getpid());
    childpid = fork();
    if(childpid == p){
        execvp(margv[0],margv);
    }
    else{
        wait(&childpid);
    }
    printf("After We have %d",getpid());
    printf("END\n");
    return 0;
}