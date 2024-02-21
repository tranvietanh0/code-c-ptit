#include <stdio.h>
#include <math.h>
void inFibo(int n){
    if(n == 1){
        printf("1");
    }
    else if(n == 2){
        printf("1");
    }
    else{
        long long fn1 = 1, fn2 = 1;
        long long cnt = 2, res = 0;;
        for (int i = 2; i <= 92; i++){
            long long fn = fn1 + fn2;
            cnt += 1;
            if(cnt == n){
                res = fn;
                break;
            }
            fn2 = fn1;
            fn1 = fn;
        }
        printf("%lld", res);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        inFibo(n);
        printf("\n");
    }
    return 0;
}