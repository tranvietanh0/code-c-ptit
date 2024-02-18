#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(n / i != i && n / i != n){
                sum += n / i;
            }
        }
    }
    if(sum == n){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}