#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int max_1 = -1e9, max_2 = -1e9;
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        if(a[i] > max_1){
            max_1 = a[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(a[i] > max_2 && a[i] < max_1){
            max_2 = a[i];
        }
    }
    printf("%d %d\n", max_1, max_2);
    return 0;
}