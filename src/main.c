#include <stdio.h> /* TODO: Delete after testing */

#include "../headers/rnd.h"




int main(int argc, char ** argv) {
    usage(argc);            // Checking amount of parameters;
    //chck_fln(argv[3]);             // Checking existence of file;
    create_file(argv[3]);   // Create new file;

    //f_rnm();
    flrnm();



    return 0;
}









