//
// Created by hgmoa on 28/09/17.
//

#include "Ejercicio1.h"
#include <stdio.h>
#include <stdlib.h>

void myseq(int first, int increment, int last);

//
// Programa que imite a la funcion myseq de unix
//
int main(int argc, char *args[]) {
    switch (argc) {
        default:
            puts("Unexpected behaviour.");
            printHelp();
            break;
        case 0:
        case 1:
            puts("Not enough arguments");
            printHelp();
            break;
        case 2:
            last = atoi(args[1]);
            break;
        case 3:
            first = atoi(args[1]);
            last = atoi(args[2]);
            break;
        case 4:
            first = atoi(args[1]);
            increment = atoi(args[2]);
            last = atoi(args[3]);
            break;
    }
    myseq(first, increment, last);
    return 0;
}

void myseq(int first, int increment, int last) {
    for (int i = first; i <= last; i += increment) {
        printf("%i\n", i);
    }
}

void printHelp() {
    fprintf(stderr,"Use:\n");
    fprintf(stderr,"myseq LAST\n");
    fprintf(stderr,"myseq FIRST LAST\n");
    fprintf(stderr,"myseq FIRST INCREMENT LAST\n");
}
