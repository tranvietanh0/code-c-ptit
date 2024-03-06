#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(int n){
    int ans = n;
    int rev = 0;
    while(n){
        if(n % 10 == 9){
            return false;
        }
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == ans;
}
int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i <= n; i++){
        if(check(i)){
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n");
    printf("%d", cnt);
    return 0;
}