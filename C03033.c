#include<stdio.h>
#include<math.h>
#include <stdbool.h>
void ptich(int n){
    for (int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        if(n % i == 0){
            while(n % i == 0){
                cnt += 1;
                n /= i;
            }
            printf("%d^%d", i, cnt);
            if(n > 1){
                printf(" * ");
            }
        }
    }
    if(n > 1){
        printf("%d^1", n);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int res = n;
        printf("%d = ", res);
        ptich(n);
        printf("\n");
    }
    return 0;
}