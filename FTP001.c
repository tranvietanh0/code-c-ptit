#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int cnt = 0;
        for (int j = 1; j <= i; j++){
            printf("%d ", cnt);
        }
        for (int j = i + 1; j <= n; j++){
            cnt += 1;
            printf("%d ", cnt);
        }
        printf("\n");
    }
    return 0;
}