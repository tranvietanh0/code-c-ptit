#include <stdio.h>
#include <math.h>
int min_(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++){
        for (int j = 1; j <= 2 * n - 1; j++){
            int minPos = min_(min_(i - 1, 2 * n - 1 - i), min_(j - 1, 2 * n - 1 - j));
            printf("%d", n - minPos);
        }
        printf("\n");
    }
    return 0;
}