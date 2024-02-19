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
bool checktn(int n){
    int res = 0;
    int tmp = n;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == tmp;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for (int i = a; i <= b; i++){
            if(checktn(i) == true && checkPrime(i) == true){
                cnt += 1;
                printf("%d ", i);
                if(cnt == 10){
                    printf("\n");
                    cnt = 0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}