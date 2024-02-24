#include <stdio.h>
#include <math.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    if(n >= m){
        for (int i = n; i >= 1; i--){
            int res = i;
            for (int j = 1; j <= m; j++){
                if(j < i){
                    printf("%d", res--);
                }
                else{
                    printf("%d", res++);
                }
            }
            printf("\n");
        }
    }
    else{
        for (int i = 1; i <= n; i++){
            int res = m - i + 1;
            for (int j = 1; j <= m; j++){
                if(j <= m - i){
                    printf("%d", res--);
                }
                else{
                    printf("%d", res++);
                }
            }
            printf("\n");
        }

    }
    return 0;
}