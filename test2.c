#include <stdio.h>
int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", min(min(a, b), c));
    return 0;
}