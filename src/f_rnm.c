#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


const char *f_rnm(const char *file_name, int mode) {

    char * new_fln = malloc(strlen(file_name));

    char lst_char;
    int lstchar;

    switch (mode) {
        case 1:
            new_fln = malloc(strlen(file_name)+1);
            lst_char = 1 + '0';
            strcat(new_fln, file_name);
            strcat(new_fln, &lst_char);
            new_fln [strlen(file_name)+1] = 0x00;
            break;
        case 2:
            new_fln = malloc(strlen(file_name));
            lst_char = file_name[strlen(file_name) - 1];
            lstchar =lst_char + 0 + 1;
            memcpy(new_fln, file_name, (strlen(file_name) - 1 ));
            strcat(new_fln, &lstchar);
            break;
        default:break;
    }

    return new_fln;
}
