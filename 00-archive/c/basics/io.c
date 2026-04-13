#include <stdio.h>
#include <ctype.h>

int main() {
    int c; 

    printf("Enter a c: ");
    while((c = getchar()) != EOF) { 
        putchar(c);
    }
    return 0;

}