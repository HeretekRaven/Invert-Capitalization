#include <stdio.h>



void invert(char input[]){
	int i = 0;
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	char caps[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(input[i] != '\0'){
		for (int x = 0; x < 26; x++){
			if (low[x] == input[i]){
				input[i] = caps[x];
			}else if (caps[x] == input[i]){
				input[i] = low[x];
			}
		}
		i++;
	}
	printf("%s ",input);

}


int main(int argc, char* argv[]){
	char *temp;
	for(int y = 1; y < argc; y++){
		invert(argv[y]);
	}
	return 0;
}
