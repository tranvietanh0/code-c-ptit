#include <stdio.h>
#include <math.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++){
        int res = i;
        int ans = m;
        for (int j = 1; j <= m; j++){
            if(j <= i){
                printf("%d", res++);
            }
            else{
                int tmp = ans - i;
                printf("%d", tmp++);
            }
        }
        printf("\n");
    }
    return 0;
}