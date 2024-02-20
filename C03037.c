#include <stdio.h>
#include <math.h>
#include <stdbool.h>
long long rev(long long n){
    long long ans = 0;
    while(n){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
int main(){
    long long n;
    scanf("%lld", &n);
    n = rev(n);
    long long ans = n;
    int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
    while(n){
        int k = n % 10;
        if(k == 2){
            cnt2 += 1;
        }
        if(k == 3){
            cnt3 += 1;
        }
        if(k == 5){
            cnt5 += 1;
        }
        if(k == 7){
            cnt7 += 1;
        }
        n /= 10;
    }
    while(ans){
        int k = ans % 10;
        if(k == 2 && cnt2 != 0){
            printf("%d %d\n", k, cnt2);
            cnt2 = 0;
        }
        if(k == 3 && cnt3 != 0){
            printf("%d %d\n", k, cnt3);
            cnt3 = 0;
        }
        if(k == 5 && cnt5 != 0){
            printf("%d %d\n", k, cnt5);
            cnt5 = 0;
        }
        if(k == 7 && cnt7 != 0){
            printf("%d %d\n", k, cnt7);
            cnt7 = 0;
        }
        ans /= 10;
    }
    return 0;
}