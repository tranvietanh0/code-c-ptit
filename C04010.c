#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int min1 = 1e9, min2 = 1e9;
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] < min1){
            min1 = a[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(a[i] > min1 && a[i] < min2){
            min2 = a[i];
        }
    }
    printf("%d %d", min1, min2);
    return 0;
}