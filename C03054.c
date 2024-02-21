#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkValid(long long n){
    long long res = n;
    bool ok = false;
    while(n){
        int k = n % 10;
        if(k == 1){
            ok = true;
        }
        n /= 10;
    }
    if(ok == false){
        return false;
    }
    else{
        while(res){
            int r = res % 10;
            if(r == 3 || r == 2 || r == 4 || r == 5 || r == 6 || r == 7){
                return false;
            }
            res /= 10;
        }
    }
    return true;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        int cnt = 0;
        if(n < 10){
            if(n == 1){
                printf("1\n");
            }
            else{
                if(n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7){
                    printf("INVALID\n");
                }
                else{
                    printf("0\n");
                }
            }
        }
        else{
            if(checkValid(n)){
                while(n){
                    cnt += 1;
                    if(n % 10 == 1){
                        long long tmp = pow(10, cnt - 1);
                        printf("%lld\n", tmp);
                        break;
                    }
                    n /= 10;
                }
            }
            else{
                printf("INVALID\n");
            }
        }
    }
    return 0;
}