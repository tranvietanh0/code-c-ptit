#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt[101] = {0};
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int dem = 0;
    for(int i = 0; i < 101; i++){
        if(cnt[i] > 1){
            dem += 1;
        }
    }
    printf("%d\n", dem);
    for (int i = 0; i < n; i++){
        if(cnt[a[i]] > 1){
            printf("%d ", a[i]);
            cnt[a[i]] = 0;
        }
    }
    return 0;
}