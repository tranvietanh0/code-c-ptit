#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
bool check(char c[]){
    if(c[0] == c[strlen(c) - 1] && c[0] == '8'){
        return true;
    }
    return false;
}
bool check2(char c[]){
    int sum = 0;
    int len = strlen(c);
    for (int i = 0; i < len; i++){
        sum += c[i] - '0';
    
    }
    return sum % 10 == 0;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[501];
        scanf("%s", c);
        if(check(c) && check2(c)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}