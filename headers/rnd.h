//
// Created by alexandr_v_zaharchuk on 07.02.16.
//

#ifndef RND_RND_H
#define RND_RND_H

int chck_fln(const char *fln);

int create_file(const char *fln);

const char *f_rnm(const char *file_name, int mode);

int usage(int argc);

char * rnd_gen(int rnd_num, int rnd_max);

#endif //RND_RND_H
