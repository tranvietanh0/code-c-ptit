#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
int main(){
    char c[101];
    gets(c);
    char res[101][101];
    int n = 0;
    char *word = strtok(c, " ");
    while(word != NULL){
        bool check = true;
        for (int i = 0; i < n; i++){
            if(strcmp(word, res[i]) == 0){
                check = false;
                break;
            }
        }
        if(check == true){
            strcpy(res[n], word);
            n++;
        }
        word = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++){
        printf("%s ", res[i]);
    }
    return 0;
}