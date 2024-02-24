#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int cnt[1000001];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        if(cnt[a[i]] == 1){
            res += 1;
        }
    }
    printf("%d\n", res);
    for (int i = 0; i < n; i++){
        if(cnt[a[i]] == 1){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return 0;
}