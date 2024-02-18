#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        int ok = 1;
        while(n){
            int last = n % 10;
            n /= 10;
            int res = n % 10;
            if(res > last){
                ok = 0;
                break;
            }
        }
        if(ok == 1){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}