#include <stdio.h>
#include <math.h>
long long tich(int n){
    long long tich = 1;
    while(n){
        tich *= 1ll * n % 10;
        n /= 10;
    }
    return tich;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", tich(n));
    return 0;
}