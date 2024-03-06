#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        char c = 64 + i;
        char tmp = c;
        int cnt = n - 1;
        for (int j = 1; j <= i; j++){
            printf("%c ", tmp);
            tmp += cnt;
            cnt--;
        }
        printf("\n");
    }
    return 0;
}