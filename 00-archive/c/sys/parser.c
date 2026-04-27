// Purpose: used to parse command line arguments 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MSG_LEN 64

int main() {
    char* cmd_line =  "touch hello.c";
    char* arg = (char*)malloc(sizeof(char) * MSG_LEN);
    int len = strlen(cmd_line);

    char *argv[2];
    size_t index = 0;
    
    size_t j, i = 0;
    while (i < len)
    {
        j = 0;
        while (!isspace(cmd_line[i]))
        {
            arg[j++] = cmd_line[i++];
        }
        
        if(j != 0) {
            arg[j + 1] = '\0';
            argv[index++] = strdup(arg);
        

            memset(arg, 0, strlen(arg));
        }

        i++;
    }

    for(int k = 0; k < index; k++) {
        printf("String: %s\n", argv[k]);
    }

    free(arg);
    
    return 0;
}