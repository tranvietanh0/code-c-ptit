#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void rev(long long n){
    long long ans = 0;
    while(n){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    int cnt[11] = {0};
    long long res = 0;
    long long ans = n;
    while(n){
        if(n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7){
            cnt[n % 10]++;
        }
        n /= 10;
    }
    while(ans){
        res = res * 10 + ans % 10;
        ans /= 10;
    }
    while(res){
        if(cnt[res % 10] != 0){
            printf("%d %d\n", res % 10, cnt[res % 10]);
            cnt[res % 10] = 0;
        }
        res /= 10;
    }
    return 0;
}