//
// Created by alexandr_v_zaharchuk on 05.02.16.
//
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "../headers/rnd.h"

void create_file(const char *fln) {
    int fd;
    int ext;
    const char * tmp = NULL;

    ext = chck_fln(fln);

    if (ext == 103) {
        if (isalpha(fln[strlen(fln) - 1]) != 0) tmp = f_rnm(fln,1);
        else tmp = f_rnm(fln,2);
    }
    else tmp = fln;

    ext = chck_fln(tmp);

    while (ext != 102) {

            //
            if (isalpha(tmp[strlen(tmp) - 1]) != 0) tmp = f_rnm(tmp,1);
            else tmp = f_rnm(tmp,2);
        //else tmp = fln;
        ext = chck_fln(tmp);
    }



    //ext = chck_fln(tmp);

    fd = open (tmp, S_IRUSR | S_IWUSR | O_CREAT); // fd = creat(tmp, S_IRUSR | S_IWUSR);
    printf("Created file descriptor: %i \n", fd);
}