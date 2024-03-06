#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int prime[100001];
void sang(){
    for (int i = 0; i <= 100000; i++){
        prime[i] = 1;
    }
    prime[1] = prime[0] = 0;
    for (int i = 2; i <= sqrt(100000); i++){
        if(prime[i] == 1){
            for (int j = i * i; j <= 100000; j += i){
                prime[j] = 0;
            }
        }
    }
}
bool check(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum % 5 == 0;
}
int main(){
    int n;
    scanf("%d", &n);
    sang();
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if(prime[i] == 1 && check(i)){
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n");
    printf("%d", cnt);
    return 0;
}