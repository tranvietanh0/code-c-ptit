#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
void cut(char *c){
    int len = strlen(c);
    for (int i = 0; i < len; i++){
        if(c[i] == '8' || c[i] == '9'){
            c[i] = '0';
        }
    }
}
bool check(char *c){
    int len = strlen(c);
    int cnt = 0;
    for (int i = 0; i < len; i++){
        if(c[i] == '0'){
            cnt += 1;
        }
    }
    if(cnt == len){
        return false;
    }
    for (int i = 0; i < len; i++){
        if(c[i] != '0' && c[i] != '1'){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[20];
        scanf("%s", c);
        cut(c);
        int tmp = -1;
        if(check(c)){
            for (int i = 0; i < strlen(c); i++){
                if(c[i] == '1'){
                    tmp = i;
                    break;
                }
            }
            for (int i = tmp; i < strlen(c); i++){
                printf("%c", c[i]);
            }
        }
        else{
            printf("INVALID");
        }
        printf("\n");
    }
    return 0;
}