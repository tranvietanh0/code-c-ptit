#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(int n){
    int can = sqrt(n);
    return can * can == n;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int x = sqrt(a);
    if(check(x) == false){
        x += 1;
    }
    int y = sqrt(b);
    int cnt = y - x + 1;
    printf("%d\n", cnt);
    for (int i = x; i <= y; i++){
        printf("%lld\n", 1ll * i * i);
    }
    return 0;
}