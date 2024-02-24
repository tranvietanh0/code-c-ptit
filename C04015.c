#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    int k = 1;
    while(t--){
        int n;
        scanf("%d", &n);
        int cnt[10001] = {0};
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            cnt[a[i]]++;
        }
        printf("Test %d:\n", k);
        for (int i = 0; i < n; i++){
            if(cnt[a[i]] != 0){
                printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
                cnt[a[i]] = 0;
            }
        }
        k += 1;
    }
    return 0;
}