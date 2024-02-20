#include <stdio.h>
#include <math.h>
int n; 
int mark[1000001];
int main(){
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        mark[a]++;
        mark[b]++;
    }
    for (int i = 1; i <= n; i++){
        if(mark[i] == n - 1){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}