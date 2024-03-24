#include <stdio.h>
#include <math.h>
typedef long long ll;
int checkFibo(ll n){
    if(n == 1 || n == 0){
        return 1;
    }
    ll fn1 = 1, fn2 = 0;
    for (int i = 2; i <= 92; i++){
        ll fn = fn1 + fn2;
        if(fn == n){
            return 1;
        }
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        if(checkFibo(n) == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}