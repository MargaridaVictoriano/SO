#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//Use strstr
int main(int argc, char* argv[]){
	char* p;
	p = strstr(argv[2],argv[1]);
	printf("%s\n",p);
	return EXIT_SUCCESS;

}