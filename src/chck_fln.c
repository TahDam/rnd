//
// Created by alexandr_v_zaharchuk on 05.02.16.
//

/**
 * Return codes:
 * 102 - no such file;
 * 103 - file exist;
 */

#include <fcntl.h>
#include <stdio.h>

int chck_fln(const char *fln) {

    int fd;
    int ext;

    fd = open(fln, O_RDONLY);

    if (fd == -1) ext = 102;
    else ext = 103;

    return ext;
}