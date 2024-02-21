#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, max_ = -1e9;
        int cnt[1001] = {0};
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++){
            if(a[i] >= max_){
                max_ = a[i];
            }
        }
        for (int i = 0; i < n; i++){
            if(max_ == a[i]){
                cnt[i]++;
            }
        }
        printf("%d\n", max_);
        for (int i = 0; i < n; i++){
            if(cnt[i] != 0){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}