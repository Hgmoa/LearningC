//
// Created by Hgmoa on 12/11/2017.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <io.h>

#define BUFFERSIZE 100

int main(int argc, char **argv) {
	char *element = malloc(BUFFERSIZE);
	char *prepend = "Item";
	char *append = ".java";
	FILE *listElements = fopen("../ElementsGenerator/ListElements.txt", "r");
	if (listElements == NULL) {
		fprintf(stderr, "Error abriendo el fichero");
		exit(1);
	}
	mkdir("./out/");
	chdir("./out/");
	while (fgets(element, BUFFERSIZE, listElements)) {
		char *filename = calloc(BUFFERSIZE, sizeof(char));
		char *lowercaseElement = calloc(BUFFERSIZE, sizeof(char));
		element[strlen(element)-1]= '\0';
		//fprintf(stderr, "Read %s\n", element);
		strcpy(lowercaseElement,element);
		lowercaseElement[0] = (char) tolower(lowercaseElement[0]);
		filename = strcat(filename,prepend);
		filename = strcat(filename, element);
		filename = strcat(filename, append);
		//fprintf(stderr, "Generating java file %s\n\n", filename);
		FILE *file = fopen(filename, "w+");
		if (file==NULL){
			fprintf(stderr,"ERROR\n");
		}
		fprintf(file,
				"package hgmoa.chemcraft.items;\n"
				"\n"
				"public class Item%s extends BaseItem implements BaseElements {\n"
				"\n"
				"    public Item%s() {\n"
				"        registryName = \"%s\";\n"
				"        registerItem();\n"
				"    }\n"
				"}",element,element,lowercaseElement);
		fflush(file);
		fprintf(stdout,"@GameRegistry.ObjectHolder(\"chemcraft:elements:%s\")\n",lowercaseElement);
		fprintf(stdout,"public static Item%s item%s;\n",element,element);
		fclose(file);
		free(filename);
		free(lowercaseElement);
	}
	fclose(listElements);
	return 0;
}