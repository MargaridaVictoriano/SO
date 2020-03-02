#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char* argv[]){
	FILE* f = fopen(argv[2],"r");
	char ch;
	if(argv[1][1] == 'u'){
		//printf("YAY\n");
		while((ch = fgetc(f)) != EOF){
			ch = toupper(ch);
			printf("%c", ch);
		}
	}
	else if(argv[1][1] == 'l'){
			while((ch = fgetc(f)) != EOF){
				ch = tolower(ch);
				printf("%c",ch);
			}
	}
	else{
		while((ch = fgetc(f)) != EOF){
			printf("%c",ch);
		}
	}

	return EXIT_SUCCESS;

}