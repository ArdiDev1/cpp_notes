#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_ARG_LENGTH 64
#define MAX_BUFF_LEN 1024
#define MAX_MSG_LEN  2048


int parse_line(char* arg_line, size_t length) {
    char* arg = (char*)malloc(MAX_ARG_LENGTH * sizeof(char));

    free(arg);
    return 0;
}

int main() {
    char cwd_buff[MAX_BUFF_LEN];
    char msg_buff[MAX_MSG_LEN];
    
    printf("\n");
    while(1) {
        printf("shell: %s> ", getcwd(cwd_buff, sizeof(cwd_buff)));
        
        if(!fgets(msg_buff, sizeof(msg_buff), stdin)) {
            printf("\nerror: parsing arguments ");
        }

        int ret = parse_line(msg_buff, strlen(msg_buff));

        if(strncmp(msg_buff, "!", sizeof(char)) == 0) {
            break;
        }
    }

    printf("\n");
    return 0;
}