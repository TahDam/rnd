#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


const char *f_rnm(const char *fln, int mode) {
    const char * new_fln=NULL;

    // char * buffer = (char*) malloc(len + 1);

    int RNM_MSS1_SIZE = (sizeof(fln) + 1);
    int RNM_MSS2_SIZE = (sizeof(fln));

    char rnm_mss1 [RNM_MSS1_SIZE];
    char rnm_mss2 [RNM_MSS2_SIZE];

    memset(rnm_mss1, '\0', (RNM_MSS1_SIZE));
    memset(rnm_mss2, '\0', (RNM_MSS2_SIZE));

    char lst_char;
    int lstchar;


    switch (mode) {
        case 1:
            lst_char = 1 + '0';
            strcat(rnm_mss1, fln);
            strcat(rnm_mss1, &lst_char);
            rnm_mss1[sizeof(fln) + 1] = 0x00;
            new_fln = rnm_mss1;
            break;
        case 2:
            //printf("src_fln length = %i \n", (int)strlen(src_fln)); // TODO: Delete after testing;
            //printf("src_fln last char = %c \n", src_fln[strlen(src_fln)-1]); // TODO: Delete after testing;
            lst_char = fln[RNM_MSS2_SIZE - 1];
            //printf("Fln size in the f_rnm.c: %i",RNM_MSS2_SIZE);
            //lstchar = (atoi((const char *) lst_char));
            //lst_char = ((lst_char + 0) + 1 ) + '0'; //(char) (atoi(lst_char) + '0');
            lstchar = lst_char + 0 + 1;
            lst_char = 0;
            lst_char = lstchar;
            memcpy(rnm_mss2, fln, (RNM_MSS2_SIZE-1));
            strcat(rnm_mss2, &lst_char);
            rnm_mss2[RNM_MSS2_SIZE] = 0x00;
            new_fln = rnm_mss2;
            break;
        default:break;
    }


    /*
    memset(rnm_mss1, '\0', (sizeof(fln) + 1));
    memset(rnm_mss2, '\0', (sizeof(fln)));
     */


    /*
    free(rnm_mss1);
    free(rnm_mss2);
     */

    return new_fln;
}
