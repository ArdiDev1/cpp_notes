#include <stdio.h>
#define MAX_WORD_LEN 100
int main(int argc, char* argv[]) {
    if(argc < 3) {
        printf("Error, Not enough arguments");
        return 1;
    }
    
    FILE *fp;
    FILE *fp2;

    fp = fopen(argv[1] , "r");

    if(fp == NULL) { 
        printf("Error, file not found");
        return 2;
    }

    fp2 = fopen(argv[2], "w");
    char* buff; 

    while((buff = fgets(buff, MAX_WORD_LEN, fp)) != NULL) {
        fputs(buff, fp2);
    }

    fclose(fp);
    fclose(fp2);

    return 0;
}