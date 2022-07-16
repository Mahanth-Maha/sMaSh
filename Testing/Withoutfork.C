#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char ** argv){
    printf("START\n");
    char* margv[] = {"ping","www.youtube.com",NULL};
    execvp(margv[0],margv);
    printf("END\n");
    return 0;
}