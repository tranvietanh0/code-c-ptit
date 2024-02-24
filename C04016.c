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
    int t;
    scanf("%d", &t);
    int k = 1;
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        int cnt[100001] = {0};
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(checkPrime(a[i])){
                cnt[a[i]]++;
            }
        }
        printf("Test %d:\n", k);
        for (int i = 0; i < 100001; i++){
            if(cnt[i] != 0){
                printf("%d xuat hien %d lan\n", i, cnt[i]);
                cnt[i] = 0;
            }
        }
        k += 1;
    }
    return 0;
}