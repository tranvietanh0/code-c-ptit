#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.3lf", 1.0 * sum / n);
    return 0;
}