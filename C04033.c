#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int cnt[101];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++){
        if(cnt[a[i]] != 0){
            printf("%d ", a[i]);
            cnt[a[i]] = 0;
        }
    }
    return 0;
}