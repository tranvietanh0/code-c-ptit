#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkPrime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long l, r;
        scanf("%lld%lld", &l, &r);
        int a = sqrt(l);
        int b = sqrt(r);
        int cnt = 0;
        for (int i = a; i <= b; i++){
            if(checkPrime(i)){
                cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}