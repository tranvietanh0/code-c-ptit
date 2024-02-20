#include <stdio.h>
#include<math.h>
#include <stdbool.h>
bool check(long long n){
    int cntE = 0, cntO = 0;
    while(n){
        int k = n % 10;
        if(k % 2 == 1){
            cntO += 1;
        }
        else{
            cntE += 1;
        }
        n /= 10;
    }
    return cntO > cntE;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        if(check(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}