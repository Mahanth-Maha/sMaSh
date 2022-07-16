// #include <ctype.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "mstring.h"
#include "../declare.h"

void make_lower(char *p){
    // for(int i = 0; str[i];i++) str[i] = tolower(str[i]);
    for ( ; *p; ++p) *p = tolower(*p);
}

int ignorecase_isequal(char *s1,char *s2){
    if(strlen(s1) != strlen(s2))
        return 0;
    make_lower(s1);
    make_lower(s2);
    return (strcmp(s1,s2))?0:1;
}