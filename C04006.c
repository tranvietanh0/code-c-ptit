#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        b[n - i - 1] = a[i];
    }
    for (int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    return 0;
}