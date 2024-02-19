#include <stdio.h>
#include <math.h>
void ptich(int n){
    for (int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        if(n % i == 0){
            while(n % i == 0){
                cnt += 1;
                n /= i;
            }
            printf("%d(%d) ", i, cnt);
        }
    }
    if(n > 1){
        printf("%d(1)", n);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    int k = 1;
    while(t--){
        int n;
        scanf("%d", &n);
        printf("Test %d: ", k);
        ++k;
        ptich(n);
        printf("\n");
    }
    return 0;
}