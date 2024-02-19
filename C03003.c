// #include <stdio.h>
// #include <math.h>
// int prime[1000001];
// void sang(){
//     for (int i = 0; i <= 1000001; i++){
//         prime[i] = 1;
//     }
//     prime[0] = prime[1] = 0;
//     for (int i = 2; i <= sqrt(1000001); i++){
//         if(prime[i] == 1){
//             for (int j = i * i; j <= 1000001; j += i){
//                 prime[j] = 0;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     int cnt = 0;
//     sang();
//     for (int i = 1; i <= 1000001; i++){
//         if(prime[i] == 1){
//             cnt += 1;
//             printf("%d\n", i);
//             if(cnt == n){
//                 break;
//             }
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkPrime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}
int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i <= 1000000000; i++){
        if(checkPrime(i)){
            cnt += 1;
            printf("%d\n", i);
            if(cnt == n){
                break;
            }
        }
    }
    return 0;
}