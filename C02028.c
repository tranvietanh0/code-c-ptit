#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        char c = 'A' - 2;
        c += i * 2;
        for (int j = n; j >= i; j--){
            printf("%c", c);
            c += 2;
        }
        printf("\n");
    }
    return 0;
}