#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define TRUE 1
#define FORK_LIMIT 10

// int my_fork(fork_limit) {
// if (fork_limit > FORK_LIMIT) {
// return -1;
// } else {
// fork();
// }
// return 0;
// }

int get_input() {
    char *buff = (char *)malloc(100);
    if (!buff) {
        fprintf(stderr, "Error: buff not allocated!\n");
        return -1;
    }
    fgets(buff, sizeof(buff), stdin); // get input safely

    return 0;
}

int main() {
    while (TRUE) {
        // fprintf(stderr, "Shell running!\n");
        /*
        1. prompt user, get input
        2. validate input
        3. parse input
        4. signal handling
        5. handle forking behavior
        6. etc.
        */

        get_input();

        // read_command();

        // if (my_fork(fork_limit) != 0) {
        // /*Parent code*/
        // waitpid(-1, &status, 0);
        // } else {
        // /*Child code*/
        // execve(command, parameters, 0); /* execute code*/
        // }
    }

    return 0;
}
