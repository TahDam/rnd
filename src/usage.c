//
// Created by alexandr_v_zaharchuk on 05.02.16.
//

/**
 * Errors codes:
 * -1  - unspecified error
 * 0   - OK (no errors)
 * 100 - amount of parameters is less then 3
 * 101 - amount of parameters is more then 3
 */

#include <stdio.h>

#define USAGE_STRING printf("Usage: [numbers amount] [MAX number] [file name] \n");

int usage(int argc) {

    int error_code = 0;

    if (argc<4) {
        USAGE_STRING
        error_code = 100;
    }
    else if (argc>4) {
        USAGE_STRING
        error_code = 101;
    }
    else if (argc==4) error_code = 0;
    else {
        USAGE_STRING
        error_code = -1;
    }

    printf("Error code: %i \n", error_code); /* TODO: Delete after testing */

    return error_code;
}