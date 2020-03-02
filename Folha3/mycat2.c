#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[]){
	FILE* f;
	char ch;
	for(int i = 1; i < argc; i++){
		f = fopen(argv[i],"r");
		while((ch=fgetc(f)) != EOF){
			printf("%c", ch);
		}
		fclose(f);
	}
	return EXIT_SUCCESS;
}