#include <unistd.h>
#include <stdio.h>

int main() {
    const char *path = "/mnt/c/Users/Ardi";  

    if (chdir(path) == 0) {
        printf("Directory changed to %s\n", path);
    } else {
        perror("chdir failed");
    }

    char cwd[1024];

    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working directory: %s\n", cwd);
    } else {
        perror("getcwd() error");
        return 1;
    }

}