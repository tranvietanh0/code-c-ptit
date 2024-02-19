#include <stdio.h>
#include <math.h>
int sumDigit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(sumDigit(a) <= sumDigit(b)){
        printf("%d %d", a, b);
    } 
    else{
        printf("%d %d", b, a);
    }
    return 0;
}