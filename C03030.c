#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(int n){
    while(n){
        int last = n % 10;
        n /= 10;
        int res = n % 10;
        if(last < res){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int ans = pow(10, n);
        for (int i = ans / 10; i < ans; i++){
            if(check(i)){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}