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
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt[1001] = {0};
    int dem = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(checkPrime(a[i])){
            cnt[a[i]]++;
            dem += 1;
        }
    }
    printf("%d ", dem);
    for (int i = 0; i < n; i++){
        if(cnt[a[i]] != 0){
            printf("%d ", a[i]);
        }
    }
    return 0;
}