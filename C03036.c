#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(long long n){
    long long res = n;
    long long ans = 0;
    while(n){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return res == ans;
}
bool checkDigit(long long n){
    while(n){
        int k = n % 10;
        if(k % 2 == 0){
            return false;
        }
        n /= 10;
    }
    return true;
}
bool checkSum(long long n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 2 != 0){
        return true;
    }
    return false;
}  
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        if(check(n) && checkDigit(n) && checkSum(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}