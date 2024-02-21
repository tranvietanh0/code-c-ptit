#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++){
            b[i] = a[n - i - 1];
        }
        bool ok = true;
        for (int i = 0; i < n; i++){
            if(a[i] != b[i]){
                ok = false;
                break;
            }
        }
        if(ok == false){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}