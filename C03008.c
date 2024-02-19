#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkhh(int n){
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++){
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
    int n; scanf("%d", &n);
    for (int i = 2; i < n; i++){
        if(checkhh(i)){
            printf("%d ", i);
        }
    }
    return 0;
}