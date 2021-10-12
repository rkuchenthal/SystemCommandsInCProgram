#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Hello, World!\n");

    //input what ever command into "command" to make it easier to
    // make changes later on.
    char command1[50];
    char command2[50];
    char command3[50];

    //Displays a list of files and sub-directories in a directory.
    printf("\n1st Command\n");
    strcpy( command1, "dir" );
    system(command1);

    //Shows the name of or changes to a current directory.
    printf("\n2nd Command\n");
    strcpy( command2, "cd" );
    system(command2);

    //Displays user, group on local system
    printf("\n3rd Command\n");
    strcpy( command3, "whoami" );
    system(command3);
    return 0;
}
