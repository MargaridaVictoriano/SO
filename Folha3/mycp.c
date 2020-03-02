#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	FILE* f1 = fopen(argv[1],"r");
	FILE* f2 = fopen(argv[2], "w");
	char ch;
	if(f1 == NULL || f2 == NULL){
		printf("Empty Files\n");
		fclose(f1);
		fclose(f2);
		return 0;
	}
	while((ch = fgetc(f1)) != EOF){
		fputc(ch,f2);
	}

	fclose(f1);
	fclose(f2);
	return EXIT_SUCCESS;

}