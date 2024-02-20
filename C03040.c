#include<stdio.h>
#include <math.h>
#include <stdbool.h>
int sumDigit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int sumPrime(int n){
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                sum += sumDigit(i);
                n /= i;
            }
        }
    }
    if(n > 1){
        sum += sumDigit(n);
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    if(sumDigit(n) == sumPrime(n)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}