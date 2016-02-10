//
// Created by zaharchuk_av on 9.2.16.
//

#include <sys/uio.h>
#include <string.h>
#include <malloc.h>
#include <unistd.h>
#include <stdlib.h>

#define INPUT_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

void rec(int fd, char *seq) {

    write(fd, seq, strlen(seq));

}