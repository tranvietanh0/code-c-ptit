#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
bool checktn(char c[]){
    int len = strlen(c);
    if(len % 2 == 1) return false;
    else{
        for (int i = 0; i < len; i++){
            if(c[i] != c[len - i - 1]){
                return false;
            }
        }
    }
    return true;
}
bool check(char c[]){
    for (int i = 0 ; i < strlen(c); i++){
        if(c[i] != '2' && c[i] != '3' && c[i] != '5' && c[i] != '7'){
            return false;
        } 
    }
    return true;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[501];
        scanf("%s", c);
        if(check(c) && checktn(c)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}