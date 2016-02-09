//
// Created by alexandr_v_zaharchuk on 05.02.16.
//
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include "../headers/rnd.h"

int create_file(const char *fln) {
    int fd;
    int ext;
    const char * tmp = NULL;

    ext = chck_fln(fln);

    if (ext == 103) {
        if (isalpha(fln[sizeof(fln) - 1]) != 0) tmp = f_rnm(fln,1);
        else tmp = f_rnm(fln,2);
    }
    else tmp = fln;

    ext = chck_fln(tmp);

    while (ext != 102) {

            if (isalpha(tmp[sizeof(tmp) - 1]) != 0) tmp = f_rnm(tmp,1);
            else tmp = f_rnm(tmp,2);

        ext = chck_fln(tmp);
    }

    fd = creat(tmp, S_IRUSR | S_IWUSR | O_CREAT);
    //close(fd);

    return fd;
}