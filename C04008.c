#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    int cnt = 0;
    while(t--){
        cnt += 1;
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        int a[n], b[m];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < m; i++){
            scanf("%d", &b[i]);
        }
        printf("Test %d:\n", cnt);
        for (int i = 0; i <= k - 1; i++){
            printf("%d ", a[i]);
        }
        for (int i = 0; i < m; i++){
            printf("%d ", b[i]);
        }
        for (int i = k; i < n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
        return 0;
}