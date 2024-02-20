#include <stdio.h>
#include <math.h>
int prime[1000001];
void sang(){
    for (int i = 1; i <= 1000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++){
        if(prime[i] == 1){
            for (int j = i * i; j <= 1000000; j += i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    int t;
    scanf("%d", &t);
    sang();
    while(t--){
        int n;
        scanf("%d", &n);
        for (int i = 2; i <= n / 2; i++){
            if(prime[i] == 1 && prime[n - i] == 1){
                printf("%d %d ", i, n - i);
            }
        }
        printf("\n");
    }
    return 0;
}