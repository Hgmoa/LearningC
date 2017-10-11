//
// Created by hgmoa on 28/09/17.
//

#include <stdio.h>
#include <memory.h>
#include "Ejercicio2.h"


//
// Programa invert: Invierte la cadena de caracteres insertada
//
int main(int argc, char *argv[]) {
    if (argc == 1) {
        printHelp();
    } else if (argc > 1) {
        for (int i = argc - 1; i > 0; i--) {
            print_inverted(argv[i]);
            printf(" ");
        }
        printf("\n");
        return 0;
    } else {
        puts("Undefined behaviour");
        printHelp();
    }
    return 0;
}

void print_inverted(char *string) {
    size_t size = strlen(string);
    for (size_t j = size - 1; j >= 0; j--) {
        printf("%c", string[j]);
    }
}

void printHelp() {
    fprintf(stderr, "Use: invert CHARACTER STRING TO INVERT CONTAINING SPACES");
}