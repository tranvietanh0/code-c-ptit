#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void inFibo(int n){
    if(n == 1){
        printf("0");
    }
    else if(n == 2){
        printf("0 1");
    }
    else{
        printf("0 1 ");
        long long fn1 = 1, fn2 = 0;
        for (int i = 2; i < n; i++){
            int fn = fn1 + fn2;
            printf("%d ", fn);
            fn2 = fn1;
            fn1 = fn;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    inFibo(n);
    return 0;
}