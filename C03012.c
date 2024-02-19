#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkFibo(int n){
    if(n == 1 || n == 0){
        return true;
    }
    int fn1 = 1, fn2 = 0;
    for (int i = 2; i <= 92; i++){
        int fn = fn1 + fn2;
        if(fn == n){
            return true;
        }
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    if(checkFibo(n)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}