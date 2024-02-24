#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
bool check(char c[], char d[]){
	int len1 = strlen(c);
	int len2 = strlen(d);
	if(len1 != len2){
		return false;
	}
	for (int i = 0; i < strlen(c); i++){
		if(c[i] != d[i]){
			return false;
		}
	}
	return true;
}
int main(){
    char c[101];
    char d[101];
    gets(c);
    scanf("%s", d);
    char *word = strtok(c, " ");
    while(word != NULL){
    	if(check(word, d) == false){
    		printf("%s ", word);
		}
		word = strtok(NULL, " ");
    }
    return 0;
}