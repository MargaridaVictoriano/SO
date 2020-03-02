#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	char ch;
	int nc = 0;
	int nw = 1;
	FILE* f = fopen(argv[2], "r");
	if(argv[1][1] == 'c'){
		//printf("yay\n");
		while((ch = fgetc(f)) != EOF){
			nc++;
		}
		fclose(f);
		printf("Number of characters: %d\n",nc);
	}
	else if(argv[1][1] == 'w'){
		while((ch = fgetc(f)) != EOF){
			if(ch == ' '){
				nw++;
			}
		}
		fclose(f);
		printf("Number of words: %d\n",nw);
	}
	return EXIT_SUCCESS;
}