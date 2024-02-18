#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(int n){
    int can = sqrt(n);
    return can * can == n;
}
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a;
        scanf("%d", &a);
        if(check(a)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}