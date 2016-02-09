#include <stdlib.h>
#include <stdio.h> /* TODO: Delete after testing */

#include "../headers/rnd.h"




int main(int argc, char ** argv) {
    usage(argc);            // Checking amount of parameters;

    rec(create_file(argv[3]), rnd_gen(atoi(argv[1]), atoi(argv[2])));

    return 0;
}













