#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int chan = 0, le = -1;
        for (int j = 1; j <= i; j++){
            if(i % 2 == 1){
                printf("%d", le += 2);
            }
            else{
                printf("%d", chan += 2);
            }
        }
        printf("\n");
    }
    return 0;
}