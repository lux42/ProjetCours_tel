#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED

#define SIZE_TAB 20

typedef
    struct
    {
    char   marque [12];
    char   modele [12];
    char   carte_sd[8];
    int    mem;
    int    mem_ram;
    float  dim;
    double prix;
} TEL;

TEL t[SIZE_TAB],t_supp;


#endif // STRUCTURE_H_INCLUDED
