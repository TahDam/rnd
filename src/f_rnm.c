#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


const char *f_rnm(const char *file_name, int mode) {

    char * new_fln = malloc(strlen(file_name));




    // char * buffer = (char*) malloc(len + 1);

    //size_t RNM_MSS1_SIZE = (strlen(file_name) + 1);                            // (sizeof(fln) + 1);
    //size_t RNM_MSS2_SIZE = (strlen(file_name));                                // (sizeof(fln));

    //int *ptrVar = malloc( sizeof(int) );

    //char * rnm_mss1 = malloc(RNM_MSS1_SIZE);
    //char * rnm_mss2 = malloc(RNM_MSS2_SIZE);



    //memset(rnm_mss1, '\0', a1);    // (RNM_MSS1_SIZE)
    //memset(rnm_mss2, '\0', a2);    // (RNM_MSS2_SIZE)

    char lst_char;
    int lstchar;


    switch (mode) {
        case 1:
            new_fln = malloc(strlen(file_name)+1);
            lst_char = 1 + '0';
            strcat(new_fln, file_name);
            strcat(new_fln, &lst_char);
            //rnm_mss1[sizeof(file_name) + 1] = 0x00;
            //new_fln = rnm_mss1;
            break;
        case 2:
            new_fln = malloc(strlen(file_name));
            //printf("src_fln length = %i \n", (int)strlen(src_fln)); // TODO: Delete after testing;
            //printf("src_fln last char = %c \n", src_fln[strlen(src_fln)-1]); // TODO: Delete after testing;
            lst_char = file_name[strlen(file_name) - 1];
            //printf("Fln size in the f_rnm.c: %i",RNM_MSS2_SIZE);
            //lstchar = (atoi((const char *) lst_char));
            //lst_char = ((lst_char + 0) + 1 ) + '0'; //(char) (atoi(lst_char) + '0');
            lstchar =lst_char + 0 + 1;
            //lst_char = 0;
            //lst_char = lstchar;
            memcpy(new_fln, file_name, (strlen(file_name) - 1 ));
            strcat(new_fln, &lstchar);
            //rnm_mss2[RNM_MSS2_SIZE] = 0x00;
            //new_fln = rnm_mss2;
            break;
        default:break;
    }


    /*
    memset(rnm_mss1, '\0', (sizeof(fln) + 1));
    memset(rnm_mss2, '\0', (sizeof(fln)));
     */



    //free(rnm_mss1);
    //free(rnm_mss2);


    /*
    for (int i = 0; i < strlen(rnm_mss1); ++i) {
        free(rnm_mss1[i]);
    }

    for (int i = 0; i < strlen(rnm_mss2); ++i) {
        free(rnm_mss2[i]);
    }
     */

    return new_fln;
}
