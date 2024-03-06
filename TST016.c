#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(){
    char c[1000];
    scanf("%s", c);
    for (int i = 0; i < strlen(c); i++){
        if(c[i] != c[strlen(c) - i - 1]){
            printf("0");
            return;
        }
    }
    printf("1");
    return 0;
}