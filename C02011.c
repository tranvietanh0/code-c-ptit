#include <stdio.h>
#include <math.h>
int main(){
    int n, m;
    scanf("%d%d", &n,&m);
    for (int i = 1; i <= n; i++){
        int res = i;
        for (int j = 1; j <= m; j++){
            if(j <= m - i){
                printf("%d", res++);
            }
            else{
                printf("%d", res--);
            }
        }
        printf("\n");
    }
    return 0;
}