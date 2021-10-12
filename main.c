#include <stdio.h>
#include <stdlib.h>
#include <windows.system.threading.h>

int main() {
    printf("Hello, World!\n");
    system("ls");
    char command[50];

    strcpy( command, "dir" );
    //system(command);
    //system("dir");
    return 0;
}
