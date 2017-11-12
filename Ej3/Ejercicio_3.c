//
// Created by hgmoa on 30/09/17.
//

#include <stdio.h>
#include <memory.h>
#include <errno.h>
#include <stdlib.h>
#include <limits.h>
#include <io.h>
#include "Ejercicio_3.h"

//
// Programa mycd, funciona imitando funcionalidades del comando cd de unix
//
int main(int argc, char *argv[]) {
	
	if (argc > 2) {
		printHelp();
		return 1;
	} else if (argc == 1) {     //Sin args, por defecto ir a $HOME
		char *ruta_home = getenv("HOME");
		if (ruta_home == NULL)
			fputs("No existe la variable $HOME", stderr);
		mycd(ruta_home);
	} else {
		mycd(argv[1]);
	}
	return 0;
}

void printHelp() {
    fprintf(stderr, "Use: mycd path");
}

void mycd(char *ruta) {
    char *buffer[PATH_MAX];
    // 0:Success !0:Failure, errno set to error code
    if (chdir(ruta) == 0) printf("El directorio actual es: %s\n", getcwd(buffer, sizeof(buffer)));
    else fprintf(stderr, "Error al cambiar de directorio: %s\n", strerror(errno));
}