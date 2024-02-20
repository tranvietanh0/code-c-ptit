#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checktn(int n){
    int res = n;
    int ans = 0;
    while(n){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans == res;
}
bool checkDigit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 0;
}
bool check4(int n){
    while(n){
        if(n % 10 == 4){
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
        int n;
        scanf("%d", &n);
        int k = pow(10, n);
        for (int i = k / 10; i < k; i++){
            if(check4(i) && checktn(i) && checkDigit(i)){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}