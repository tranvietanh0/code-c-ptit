#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int cnt = 0;
        if(n % 2 == 0){
            cnt = 1;
        }
        for (int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i % 2 == 0){
                    cnt += 1;
                }
                if(n / i != i){
                    if(n / i % 2 == 0){
                        cnt += 1;
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}