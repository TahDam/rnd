#include <stdlib.h>
#include <stdio.h> /* TODO: Delete after testing */

#include "../headers/rnd.h"




int main(int argc, char ** argv) {
    usage(argc);            // Checking amount of parameters;
    //create_file(argv[3]);   // Create new file;
    rnd_gen(atoi(argv[1]), atoi(argv[2]));

    return 0;
}











