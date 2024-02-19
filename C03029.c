#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(long long n){
    while(n){
        int k = n % 10;
        if(k % 2 != 0){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        if(n % 2 == 0 && check(n) == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}