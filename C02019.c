#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int cnt = 2;
        for (int j = 1; j <= 2 * i - 1; j++){
            printf("%d", cnt);
            if(j < i){
                cnt += 2;
            }
            else{
                cnt -=2;
            }
        }
        printf("\n");
    }
    return 0;
}