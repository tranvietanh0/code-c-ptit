#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int cnt = abs(a - b) + 1;
    int sum = abs(a + b) * cnt / 2;
    printf("%d", sum);
    return 0;
}