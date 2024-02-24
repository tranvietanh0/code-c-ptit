#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool checktn(char *c){
    int len = strlen(c);
    for (int i = 0; i < len; i++){
        if(c[i] != c[len - i - 1]){
            return false;
        }
    }
    return true;
}
bool checkEven(char *c){
    int len = strlen(c);
    for (int i = 0; i < len; i++){
        if((c[i] - '0') % 2 != 0){
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
        if(checktn(c) && checkEven(c)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}