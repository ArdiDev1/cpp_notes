#include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 100

int main (int argc, char *argv[]) { 
    if(argc < 3){
        printf("Not enough arguments...");
        return 1;
    }

    FILE *f1;
    FILE *f2;

    f1 = fopen(argv[1], "r");
    if(f1 == NULL) {
        printf("Error opening file 1");
        return 2;
    }
    
    f2 = fopen(argv[2], "r");
    if(f2 == NULL) {
        printf("Error opening file 2");
        return 2;
    }

    

    fclose(f1);
    fclose(f2);

    return 0;
}