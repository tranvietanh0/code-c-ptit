#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkPrime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}
int sumDigit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool checkFibo(int a){
    int n = sumDigit(a);
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
    return false;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a <= b){
        for (int i = a; i <= b; i++){
            if(checkFibo(i) && checkPrime(i)){
                printf("%d ", i);
            }
        }
    }
    else{
        for (int i = b; i <= a; i++){
            if(checkFibo(i) && checkPrime(i)){
                printf("%d ", i);
            }
        }
    }
    return 0;
}