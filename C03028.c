#include <stdio.h>
#include <math.h>
long long gt(int n){
    long long res = 1;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}
long long tohop(int n, int k){
    return gt(n) / gt(n - k) / gt(k);
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            printf("%lld ", tohop(i, j));
        }
        printf("\n");
    }
    return 0;
}