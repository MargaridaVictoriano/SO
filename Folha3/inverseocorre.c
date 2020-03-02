#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//Use strstr inversed
int main(int argc, char* argv[]){
	char* p;
	p = strstr(argv[1],argv[2]);
	printf("%s\n",p);
	return EXIT_SUCCESS;

}