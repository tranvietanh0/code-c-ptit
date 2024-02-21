#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
bool check(char *c){
    int len = strlen(c);
    if(len < 2){
        return false;
    }
    if((c[0] - '0' != (c[len - 1] - '0') * 2 )&& ((c[0] - '0')* 2 != c[len - 1] - '0')){
        return false;
    }
    for (int i = 1; i < len - 1; i++){
        if(c[i] - '0' != c[len - 1 - i] - '0'){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[18];
        scanf("%s", c);
        if(check(c)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}