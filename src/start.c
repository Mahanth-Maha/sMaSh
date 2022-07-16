#include "declare.h"

int main(int argc,char ** argv){
    char cmd[BUFFER];
    /*
    bool isCaseInsensitive = false;
    int opt;
    enum { HIGH_BUFFER_MODE, LOW_BUFFER_MODE } mode = HIGH_BUFFER_MODE;
    while ((opt = getopt(argc, argv, "hl")) != -1) {
        switch (opt) {
        case 'h': isCaseInsensitive = true; break;
        case 'l': mode = HIGH_BUFFER_MODE; break;
        default:
            fprintf(stderr, "Usage: %s [-hl] \n", argv[0]);
            exit(EXIT_FAILURE);
        }
    }
    */
    printf("---------------------------\nWelcome to Simple MAha's SHell -> SMASH\nversion 0.0.1 - under development\n---------------------------\n");
    while(1){
        printf(PROMPT "/" TERMIN);
        // scanf("%s",cmd);
        if (gets(cmd) == NULL && ferror(stdin)) {
            perror("ERR: Input reading error \nEnter valid input to get"); 
            continue;
        }
        else if (ignorecase_isequal(cmd,"exit"))
            exit(0);
        //printf("Command Recived ! : %s",cmd);
    }
    return 0;
}