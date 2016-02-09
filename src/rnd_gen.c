//
// Created by zaharchuk_av on 9.2.16.
//

#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char * rnd_gen(int rnd_num, int rnd_max) {

    srand ((unsigned int) time(NULL));                              // Initialisation of rand();
    unsigned int scd_cycle;                                         // TODO: Variable keeps residue quantity of random numbers, in case of the input value is exceeded 32760
    char * sequence = malloc((size_t) rnd_num);                     // Sequence of generated random numbers;
    int curRndNum;


    for (int i = 0; i < rnd_num; ++i) {
        curRndNum = (rand() % rnd_max);
        strcat(sequence, (char *) &curRndNum);
        strcat(sequence, ", ");
    }

    sequence[strlen(sequence)+1]=0x00;

    //region TODO: Delete after testing
    for (int j = 0; j < strlen(sequence); ++j) {
        printf("%i:>> %i \n", j, sequence[j]);
    }
    //endregion

    return sequence;
}
