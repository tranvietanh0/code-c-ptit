#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int cnt = 1;
        for (int i = 1; i < n; i++){
            bool ok = false;
            for (int j = 0; j <= i - 1; j++){
                if(a[j] >= a[i]){
                    ok = true;
                }
            }
            if(ok == true){
                continue;
            }
            else{
                cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}