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
        for (int i = 0; i < n - 1; i++){
            bool ok = false;
            for (int j = i + 1; j < n; j++){
                if(a[j] >= a[i]){
                    ok = true;
                }
            }
            if(ok == false){
                printf("%d ", a[i]);
            }
            else{
                continue;
            }
        }
        printf("%d", a[n - 1]);
        printf("\n");
    }
    return 0;
}