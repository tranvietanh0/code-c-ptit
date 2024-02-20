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
bool check(int n){
    while(n){
        int k = n % 10;
        if(k != 2 && k != 3 && k != 5 && k != 7){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for (int i = a; i <= b; i++){
            if(checkPrime(i) && check(i)){
                cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}