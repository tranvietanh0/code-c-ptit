#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int cnt = n - 1;
        int res = i;
        for (int j = 1; j <= i; j++){
            printf("%d ", res);
            res += cnt;
            cnt--;
        }
        printf("\n");
    }
    return 0;
}