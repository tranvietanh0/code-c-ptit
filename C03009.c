#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkhh(int n){
    int sum = 1;
    if(n == 1){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(n / i != i && n / i != n){
                sum += n / i;
            }
        }
    }
    return sum == n;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a <= b){
        for (int i = a; i <= b; i++){
            if(checkhh(i)){
                printf("%d ", i);
            }
        }
    }
    else{
        for (int i = b; i <= a; i++){
            if(checkhh(i)){
                printf("%d ", i);
            }
        }
    }
    return 0;
}