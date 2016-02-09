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

    char * tmp = "Here is some text...";

    struct iovec input[1];



        input[0].iov_base = tmp;
        input[0].iov_len = strlen(tmp);

    printf("iov.base = %c\n", input->iov_base);


/*
    for (int j=0; j<input->iov_len; j++) {
        printf("iov.base = %c\n", (char) input[j].iov_base);
    }
*/


    writev(fd, input, (int) strlen(tmp));
    close(fd);
}