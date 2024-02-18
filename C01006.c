#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(b == 0){
        printf("0");
    }
    else{
        printf("%d %d %lld %.2lf %d", a + b, a - b, 1ll * a * b, 1.0 * a / b, a % b);
    }
    return 0;
}