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
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%lld %d\n", 1ll * a / gcd(a, b) * b, gcd(a, b));
    }
    return 0;
}