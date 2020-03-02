#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
	FILE* f = fopen(argv[1],"r");
	char ch;
	while((ch=fgetc(f)) != EOF){
		printf("%c",ch);
	}
	return EXIT_SUCCESS;
}