#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int gt(int n){
    int res = 1;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}
bool checkStrong(int n){
    int sum = 0;
    int res = n;
    while(n){
        sum += gt(n % 10);
        n /= 10;
    }
    return sum == res;
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        if(checkStrong(i)){
            printf("%d ", i);
        }
    }
    return 0;
}