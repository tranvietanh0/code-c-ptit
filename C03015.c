#include <stdio.h>
#include <math.h>
long long max_ = -1e9;
long long max__(long long a, long long b){
    if(a < b){
        return b;
    }
    else{
        return a;
    }
}
void solve(long long n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                max_ = max__(max_, i);
                n /= i;
            }
        }
    }
    if(n > 1){
        max_ = n;
    }
    printf("%lld\n", max_);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        solve(n);
    }
    return 0;
}