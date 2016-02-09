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

    struct iovec input[strlen(seq)];


    for (int i=0; i<strlen(seq); i++) {
        input[i].iov_base = (void *) seq[i];
        input[i].iov_len = strlen((const char *) seq[i]);
    }

    for (int j=0; j<strlen(input); j++) {
        printf("iov.base = %c", (char) input[j].iov_base);
    }


    writev(fd, input, (int) strlen(seq));
    close(fd);
}