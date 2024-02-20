#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(long long n){
    int last = 10;
    while(n){
        int res = n % 10;
        if(res > last){
            return false;
        }
        last = res;
        n /= 10;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long a, b;
        scanf("%lld%lld", &a, &b);
        long long cnt = 0;
        for (long long i = a; i <= b; i++){
            if(check(i)){
                cnt += 1;
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}