#include <stdio.h>
#include <string.h>

#define MSG_BUFF_LEN 100

int main(int argc, char *argv[]) {

    if(argc < 2) {
        printf("argv < 2");
        return 1;
    }

    char buff[MSG_BUFF_LEN];

    strncpy(buff, argv[1], MSG_BUFF_LEN);

    printf("argv 1: %s", buff);

    return 0;
}

