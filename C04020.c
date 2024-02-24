#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int k; scanf("%d", &k);
    for (int i = 0; i < k; i++){
        b[n - k + i] = a[i];
    }
    for (int i = 0; i < n - k; i++){
        b[i] = a[k + i];
    }
    for (int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    return 0;
}