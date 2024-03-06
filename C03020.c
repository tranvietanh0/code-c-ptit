#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(long long n){
    long long res = 0;
    long long ans = n;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == ans;
}
bool check6(long long n){
    while(n){
        if(n % 10 == 6){
            return true;
        }
        n /= 10;
    }
    return false;
}
bool checksum(long long n){
    long long sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 8;
}
int main(){
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (long long i = a; i <= b; i++){
        if(check(i) && check6(i) && checksum(i)){
            printf("%lld ", i);
        }
    }
    return 0;
}