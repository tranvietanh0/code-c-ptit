#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int cntOdd = 0, cntEven = 0;
    while(n){
        int k = n % 10;
        if(k % 2 == 0){
            cntEven++;
        }
        else{
            cntOdd++;
        }
        n /= 10;
    }
    printf("%d %d", cntOdd, cntEven);
    return 0;
}