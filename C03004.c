#include <stdio.h>
#include <math.h>
int gcd(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n%lld", gcd(a, b), 1ll * a / gcd(a, b) * b);
    return 0;
}