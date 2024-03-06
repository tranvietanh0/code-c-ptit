#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool check(long long n){
    long long res = 0;
    long long ans = n;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == ans;
}
bool checktong(long long n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 0;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        long long l = pow(10, n - 1);
        long long r = pow(10, n) - 1;
        int cnt = 0;
        for (long long i = l; i <= r; i++){
            if(check(i) && checktong(i)){
                cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
    
    return 0;
}