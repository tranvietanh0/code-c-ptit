#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int last = n % 10;
    int first;
    int cnt = 0;
    int ans = n;
    while(n >= 10){
        cnt += 1;
        n /= 10;
    }
    first = n;
    int k = pow(10, cnt);
    int res = 0;
    res = ans - last + last * k + first - first * k;
    printf("%d", res);
    return 0;
}