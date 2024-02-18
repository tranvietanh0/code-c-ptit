#include <stdio.h>
#include <math.h>
int gt(int n){
    int res = 1;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}
int main(){
    int n;
    scanf("%d", &n);
    int ans = n;
    int sum = 0;
    while(n){
        sum += gt(n % 10);
        n /= 10;
    }
    if(sum == ans){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}