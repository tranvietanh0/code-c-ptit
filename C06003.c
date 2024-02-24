#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char c[201];
        gets(c);
        int cnt = 0;
        char *word = strtok(c, " ");
        while(word != NULL){
            cnt += 1;
            word = strtok(NULL, " ");
        }
        printf("%d\n", cnt);
    }
    return 0;
}