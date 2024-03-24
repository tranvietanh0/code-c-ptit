#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
long long min(char x1[], char x2[]){
    long long a = 0, b = 0;
    for (int i = 0; i < strlen(x1); i++){
        if(x1[i] == '6'){
            x1[i] = '5';
        }
        a = a * 10 + (x1[i] - '0');
    }
    for (int i = 0; i < strlen(x2); i++){
        if(x2[i] == '6'){
            x2[i] = '5';
        }
        b = b * 10 + (x2[i] - '0');
    }
    return a + b;
}
long long max(char x1[], char x2[]){
    long long a = 0, b = 0;
    for (int i = 0; i < strlen(x1); i++){
        if(x1[i] == '5'){
            x1[i] = '6';
        }
        a = a * 10 + (x1[i] - '0');
    }
    for (int i = 0; i < strlen(x2); i++){
        if(x2[i] == '5'){
            x2[i] = '6';
        }
        b = b * 10 + (x2[i] - '0');
    }
    return a + b;
}
int main(){
    int t;
    scanf("%d", &t);
    scanf("\n");
    while(t--){
        char x1[20], x2[20];
        scanf("%s", x1);
        scanf("%s", x2);
        printf("%lld %lld\n", min(x1, x2), max(x1, x2));
    }
    return 0;
}