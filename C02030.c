#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        char res = 'B';
        for (int j = 1; j <= 2 * i - 1; j++){
            if(j == 2 * i - 1 || j == 1){
                printf("@");
            }
            else{
                printf("%c", res);
                if(j < i){
                    res += 2;
                }
                else{
                    res -= 2;
                }
            }
        }
        printf("\n");
    }
    return 0;
}